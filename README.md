# scons_snippets
Testing with scons


```$ scons
scons: Reading SConscript files ...
scons: done reading SConscript files.
scons: Building targets ...
ar rc libMathLib.a mathLib/lib.o
ranlib libMathLib.a
g++ -o main.o -c main.cpp
g++ -o main.exe -Wl,-no-undefined main.o -L. -lMathLib
scons: done building targets.```
