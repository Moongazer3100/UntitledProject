cmake_minimum_required(VERSION 3.20)
project(UntitledProject)

add_executable(${CMAKE_PROJECT_NAME}
    "${CMAKE_SOURCE_DIR}/src/main.cpp"
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Set this to ON to ship the game.
set(PRODUCTION_BUILD OFF CACHE BOOL "Make this a production build" FORCE)

if(PRODUCTION_BUILD)
    set(RES_PATH "./resources/")
else()
    set(RES_PATH "${CMAKE_SOURCE_DIR}/resources/")
endif()

target_compile_definitions(${CMAKE_PROJECT_NAME} PRIVATE
    RESOURCES_PATH="${RES_PATH}"
)

if(MSVC)
    add_compile_options(/arch:AVX2)
else()
    add_compile_options(-mavx2 -mfma)
endif()

add_executable(TestDemo
    "${CMAKE_SOURCE_DIR}/src/main2.cpp"
)

target_compile_definitions(TestDemo PRIVATE
    RESOURCES_PATH="${RES_PATH}"
)