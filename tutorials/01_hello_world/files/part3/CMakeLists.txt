cmake_minimum_required(VERSION 3.5.1)
project(readnumbers)

IF(CMAKE_COMPILER_IS_GNUCC)
   SET(CMAKE_CXX_FLAGS "--std=c++14 -pedantic -Wall -Wextra")
ENDIF(CMAKE_COMPILER_IS_GNUCC)

add_executable(readnumbers readnumbers.cpp)

enable_testing()

set(test_cmd ${CMAKE_BINARY_DIR}/readnumbers )


add_test(
    NAME test01 
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=01 -P ../tester.cmake
)

add_test(
    NAME test02
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=02 -P ../tester.cmake
)

add_test(
    NAME test03 
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=03 -P ../tester.cmake
)

add_test(
    NAME test04
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=04 -P ../tester.cmake
)

add_test(
    NAME test05
    COMMAND ${CMAKE_COMMAND} -DEXE=${test_cmd} -D ID=05 -P ../tester.cmake
)
