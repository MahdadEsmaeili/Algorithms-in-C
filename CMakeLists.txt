cmake_minimum_required(VERSION 3.20)
project(Algorithms_in_C C)

set(CMAKE_C_STANDARD 11)

# This tells CLion to build an executable named "00_firstProject" using your file
add_executable(firstProject 00_firstProject/main.c)
add_executable(caesarCipher 01_caesarCipher/main.c)
add_executable(baseConverter 02_baseConverter/main.c)
add_executable(linearSearchComparison 03_linearSearchComparison/main.c)
add_executable(binarySearch 04_binarySearch/main.c)
add_executable(secondDegreeEquation 05_secondDegreeEquation/main.c)
target_link_libraries(secondDegreeEquation PRIVATE m)
add_executable(binaryEncoding 06_binaryEncoding/main.c)
