
mkdir -p cmake_out
cd cmake_out

#cmake ../../root-finding

mkdir -p lib
cd lib

cmake -G "Unix Makefiles" -D CMAKE_INSTALL_PREFIX=/home/student/.local ../../../root-finding/lib
make
cmake -D COMPONENT=developer -P cmake_install.cmake

cd ../
mkdir -p bin
cd bin

cmake ../../../root-finding/bin

make

#cd ../
#rm -rf cmake_tmp
