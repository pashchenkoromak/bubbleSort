add_library(BubbleSort STATIC "")

target_sources(
    BubbleSort
        PRIVATE
            src/bubbleSort.cpp
        PUBLIC
            ${CMAKE_CURRENT_LIST_DIR}/include/bubbleSort.hpp
        )

target_include_directories(
    BubbleSort
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/include
    )