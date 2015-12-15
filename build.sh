if ! [ -e src ]
  then
    echo "missing source directory. Run this from within the ntest directory."
    return 1
fi

echo "---------------"
echo "Compiling ntest"
echo "---------------"

mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ../src
make

echo "---------------------------------"
echo "Copying ntest to run subdirectory"
echo "---------------------------------"

cd ..
rm -rf run
mkdir run
cp build/ntest run
cp -r resource/* run
cp -r extras run
cp -r instructions run

echo "-------------"
echo "Testing ntest"
echo "-------------"

cd run # ntest expects its working directory here
./ntest t
cd ..  # person who ran build.sh expects its working directory here
