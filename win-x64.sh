# Build ntest for Windows-x64
# on Linux
#
# Uses a docker cross-compiler which is enormous (3GB), beware.
#

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
docker run -i -v `pwd`/src:/usr/src:ro -v `pwd`/build-windows-x64:/usr/build:rw thewtex/cross-compiler-windows-x64 <<EOF
cd ../build
cmake -DCMAKE_BUILD_TYPE=Release ../src
make
mv ntest ntest.exe
EOF

echo
echo "---------------"
echo "BUILD SUCCEEDED"
echo "---------------"

