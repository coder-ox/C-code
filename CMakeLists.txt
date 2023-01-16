cmake_minimum_required(VERSION 3.23)
project(C_code C)

set(CMAKE_C_STANDARD 99)

add_executable(C_code main.c)

add_executable(PalindromeNumber PalindromeNumber.c)
add_executable(ThereNumsAdd ThereNumsAdd.c)
add_executable(year year.c)