mkdir build
cd build
cmake ../
make
./Program_ir
cd ../
clang++ output.ll