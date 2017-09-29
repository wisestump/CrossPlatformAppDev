mkdir -p cmake_tmp
cd cmake_tmp

cmake -G "Unix Makefiles" -D CMAKE_INSTALL_PREFIX=../../_out_cmake ../../root-finding/lib
make
cmake -D COMPONENT=user -P cmake_install.cmake

cd ../
rm -rf cmake_tmp
