add_library(BubbleSort "")

target_sources(
    BubbleSort
    PRIVATE
        bubbleSort.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/bubbleSort.hpp
    )

target_include_directories(
    BubbleSort
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )