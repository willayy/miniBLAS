cmake_minimum_required(VERSION 3.20)
set(CMAKE_C_STANDARD 17)

project(
  miniBLAS
  LANGUAGES ASM C
  VERSION 0.0.1
  DESCRIPTION "Test project for C with ASM"
)

add_library(
  asmFuncs OBJECT
  src/testAsm.s
)

add_library(
  ${PROJECT_NAME} STATIC
  src/miniBLAS.c
  src/miniBLAS.h
)

add_executable(
  ${PROJECT_NAME}Test
  src/miniBLAStest.c
)

target_compile_features(${PROJECT_NAME} PRIVATE c_std_17)
target_compile_features(${PROJECT_NAME}Test PRIVATE c_std_17)

target_link_libraries(${PROJECT_NAME} PRIVATE asmFuncs)
target_link_libraries(${PROJECT_NAME}Test PRIVATE ${PROJECT_NAME})



