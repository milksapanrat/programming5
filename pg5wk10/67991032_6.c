#include <stdio.h>

void findLargest(int *arr, int size, int **largestPtr)
{
    // assume the first element is the largest
    // arr point to the first element of the array
    *largestPtr = arr;

    // start checking from the second element
    for (int i = 1; i < size; i++)
    {
        // *(arr + i) = value at index i
        // **largestPtr = value that largestPtr is currently pointing to

        // If the current array value is bigger, update largestPtr to point to that element
        if (*(arr + i) > **largestPtr)
        {
            *largestPtr = arr + i;
        }
    }
}

int main()
{
    int arr[5] = {18, 7, 42, 13, 25};
    // This pointer will eventually point to the largest element in the array
    int *largest;

    findLargest(arr, 5, &largest);

    printf("Largest Value = %d\n", *largest);
    printf("Index = %ld\n", largest - arr);

    return 0;
}