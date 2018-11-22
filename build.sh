mkdir -p bin && cd bin
conan install .. --build missing -s compiler=gcc -s compiler.version=6.4 -s compiler.libcxx=libstdc++11
cmake ..
make