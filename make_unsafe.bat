rm file2.o
rm main.o
rm contracts.exe

g++.exe -fcontracts -c file2.cpp -o file2.o -fcontract-semantic=default:ignore
g++.exe -fcontracts -c main.cpp -o main.o -fcontract-semantic=default:abort
g++.exe -o contracts.exe file2.o main.o

contracts.exe