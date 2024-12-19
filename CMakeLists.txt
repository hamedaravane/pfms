cmake_minimum_required(VERSION 3.10)
project(PersonalFinanceApp VERSION 1.0 LANGUAGES CXX)

# Specify C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(finance_app
        src/main.cpp
        src/Account.cpp
        src/Transaction.cpp
        src/FileIO.cpp
        src/Report.cpp
        src/Investment.cpp
        src/Budget.cpp
)

# Include directory
target_include_directories(finance_app PRIVATE include)

# Link external libraries (if needed)
# target_link_libraries(finance_app PRIVATE nlohmann_json::nlohmann_json)

# Unit Tests
enable_testing()
add_executable(tests tests/test_main.cpp)
