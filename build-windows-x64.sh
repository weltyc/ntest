# Build ntest for Windows-x64

set -eu

if ! [ -e src ]
  then
    echo "missing source directory. Run this from within the ntest directory."
    return 1
fi

echo "---------------"
echo "Compiling ntest"
echo "---------------"

mkdir -p build-windows-x64
docker run -i \
  -v `pwd`/src:/usr/src:ro \
  -v `pwd`/build-windows-x64:/usr/build:rw \
  -u `stat -c "%u:%g" build-windows-x64` \
  thewtex/cross-compiler-windows-x64 <<EOF
cd ../build
cmake -DCMAKE_BUILD_TYPE=Release ../src
make
EOF

echo
echo "---------------"
echo "BUILD SUCCEEDED"
echo "---------------"

