cmake_minimum_required(VERSION 3.13)

set(FW_NAME workshop)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

project(${FW_NAME}
  VERSION 0.1.0.0)

add_executable(${FW_NAME})

include_directories(
  ${PROJECT_SOURCE_DIR}/Inc
)

target_sources(${FW_NAME} PRIVATE
  Src/main.c
  Src/drive.c
)
