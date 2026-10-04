cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)
project(two-args)

add_executable(two-args two-args.c)
include_directories($ENV{TLPI_INCL_DIR})
target_link_libraries(two-args $ENV{TLPI_LIB})