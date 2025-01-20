cmake_minimum_required(VERSION 3.14)
project(calculatrice)

add_executable(calculatrice main.cpp)

# Active les tests
enable_testing()

# Configure GoogleTest
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

# Ajoutez votre exécutable principal si vous en avez un
# add_executable(calculatrice main.cpp calculator.cpp)

# Configure les tests
add_executable(
        calculator_tests
        Test/calculator_test.cpp
        # Ajoutez ici les fichiers sources nécessaires pour les tests
        # Par exemple : src/calculator.cpp
)

target_link_libraries(
        calculator_tests
        gtest_main
)

# Découverte automatique des tests
include(GoogleTest)
gtest_discover_tests(calculator_tests)