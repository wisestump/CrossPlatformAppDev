mkdir -p cmake_out && cd cmake_out

cmake -G "MinGW Makefiles" ../../source

mingw32-make

cd ../
