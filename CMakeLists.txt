# Bibliotheque
#
# Build and run by calling:
# cmake -S. -Bbuild && cmake --build build && ./build/bibliotheque

cmake_minimum_required(VERSION 3.20)

# ---- Project ----
project(bibliotheque)

set(CMAKE_CXX_STANDARD 14)

# ---- Fetch CPM ----
set(CPM_DOWNLOAD_VERSION 0.32.0)
set(CPM_DOWNLOAD_LOCATION "${CMAKE_BINARY_DIR}/cmake/CPM_${CPM_DOWNLOAD_VERSION}.cmake")
if(NOT (EXISTS ${CPM_DOWNLOAD_LOCATION}))
    message(STATUS "Downloading CPM.cmake v${CPM_DOWNLOAD_VERSION}")
    file(DOWNLOAD https://github.com/cpm-cmake/CPM.cmake/releases/download/v${CPM_DOWNLOAD_VERSION}/CPM.cmake ${CPM_DOWNLOAD_LOCATION})
endif()
include(${CPM_DOWNLOAD_LOCATION})

# ---- Add dependencies via CPM ----
# See https://github.com/TheLartians/CPM.cmake for details and examples
CPMAddPackage("gh:zeux/pugixml#9e382f98")

# ---- Create executable ----
add_executable(bibliotheque
        src/book.h
        src/book.cpp
        src/utils.hpp
        main.cpp)

target_link_libraries(bibliotheque pugixml)
include_directories(src)
