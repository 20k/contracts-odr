rm file2.o
rm main.o
rm contracts.exe

g++.exe -fcontracts -c main.cpp -o main.o -fcontract-semantic=default:abort
g++.exe -o contracts.exe main.o

contracts.exe