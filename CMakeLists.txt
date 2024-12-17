cmake_minimum_required(VERSION 3.10)
project(PersonalFinanceApp VERSION 1.0 LANGUAGES CXX)

# Specify C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
file(GLOB SOURCES "src/*.cpp")
file(GLOB HEADERS "include/*.h")

# Add executable
add_executable(finance_app ${SOURCES})

# Include directory
target_include_directories(finance_app PRIVATE include)

# Link external libraries (if needed)
# target_link_libraries(finance_app PRIVATE nlohmann_json::nlohmann_json)

# Unit Tests
enable_testing()
add_executable(tests tests/test_main.cpp)
