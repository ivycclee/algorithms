#include <iostream>
#include <array>

#include "Algorithms.cpp"

int main()
{
    int nums[] = {7, 5, 9, 3, 12, 44, 2, 5 };
    int size = sizeof(nums) / sizeof(nums[0]);

    printArray(nums, size);
    //BubbleSort(nums, size);
    SelectionSort(nums, size);
    printArray(nums, size);
}
