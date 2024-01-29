#include <iostream>

// ------------ DECLARATIONS ---------------------
void BubbleSort(int numArray[], int size);
void printArray(int numArray[], int size);

void SelectionSort(int numArray[], int size);


// -------------- DEFINITIONS ------------------------
void BubbleSort(int numArray[], int size) 
{
    for (int current = 0; current < size; current++)        // loop through every array element
    {
        for (int j = 0; j < size - current; j++)
        {
            if (numArray[j] < numArray[j+1])
            {
                int temp = numArray[j];
                numArray[j] = numArray[j+1];
                numArray[j+1] = temp;
            }
        }
        
    }
}

void printArray(int numArray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << numArray[i] << " ";
    }

    std::cout << std::endl;
}

void SelectionSort(int numArray[], int size)
{
    int lowestId;

    for (int index = 0; index < size; index++)
    {
        lowestId = index;

        for (int j = index+1; j < size; j++)        // important that j starts at index+1
        {
            if (numArray[j] < numArray[lowestId])
                lowestId = j;
        }

        if (lowestId != index)
        {
            int temp = numArray[lowestId];
            numArray[lowestId] = numArray[index];
            numArray[index] = temp;
        }
    }
}