cmake_minimum_required(VERSION 3.5.1)
project(readnumbers)

SET(CMAKE_CXX_FLAGS "--std=c++14")

add_executable(readnumbers readnumbers.cpp)

enable_testing()

# this command runs the tests
add_custom_command(
    TARGET readnumbers
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo "Running and testing $<TARGET_FILE_NAME:readnumbers> ..."
    COMMAND readnumbers < ../tests/test-01.in > test-01.out
    COMMAND readnumbers < ../tests/test-02.in > test-02.out
    COMMAND readnumbers < ../tests/test-03.in > test-03.out
    COMMAND readnumbers < ../tests/test-04.in > test-04.out
    COMMAND readnumbers < ../tests/test-05.in > test-05.out
#    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

# and these are the specific tests

add_test(
    NAME test01 
    COMMAND ${CMAKE_COMMAND} -E compare_files ../tests/test-01.out test-01.out
#    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_test(
    NAME test02 
    COMMAND ${CMAKE_COMMAND} -E compare_files ../tests/test-02.out test-02.out
)

add_test(
    NAME test03
    COMMAND ${CMAKE_COMMAND} -E compare_files ../tests/test-03.out test-03.out
)

add_test(
    NAME test04
    COMMAND ${CMAKE_COMMAND} -E compare_files ../tests/test-04.out test-04.out
)

add_test(
    NAME test05
    COMMAND ${CMAKE_COMMAND} -E compare_files ../tests/test-05.out test-05.out
)
