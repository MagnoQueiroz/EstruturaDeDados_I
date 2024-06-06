cmake_minimum_required(VERSION 3.28)
project(estruturaDadosI VERSION 1.0)

set(CMAKE_C_STANDARD 99)

add_executable(estruturaDadosI
        parOrNot/functionVetorPar.c
        calcHex/hex.c
        readAndPrint/readAndPrintVerctor.c
)
