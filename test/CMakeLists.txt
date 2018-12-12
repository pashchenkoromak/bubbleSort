add_executable(
    unit_tests
        SortTest.cpp)

target_link_libraries(
    unit_tests
        ${CONAN_LIBS}
        BubbleSort)

add_test(
    NAME
        unit
    COMMAND
        ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests)
