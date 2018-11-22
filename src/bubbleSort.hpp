#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP
#include <vector>

template<typename T>
void sort(std::vector<T>& inputVector)
{
    const size_t N = inputVector.size();
    for(size_t i = 0; i < N; i++)
        for(size_t j = i + 1; j < N; j++)
            if (inputVector[j] < inputVector[j - 1])
                std::swap(inputVector[j], inputVector[j - 1]);
}

#endif // BUBBLE_SORT_HPP