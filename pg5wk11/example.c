#include <stdio.h>
#include <malloc.h>

int array_num = 10;
int* array;

/*
goals: To show the random integer array.
input: _array = the array to show <int*>
       _array_num = the number of array <int>
output: no output, due to this function type is "void"
*/
void printArray(int* _array, int _array_size)
{
    for (int _id = 0; _id < _array_size; _id++)
    {
        printf("%d ", _array[_id]);
    }
    printf("\n");
}

/*
goals: To show the random integer array.
input: _array_num = the number of array <int>
output: _res = the generated array <int*>
*/
int* numGenerate(int _array_num)
{
    int _res[_array_num];

    for (int _i = 0; _i < _array_num; _i++)
    {
        _res[_i] = _i;
    }

    printf("in numGenerate() ");
    printArray(_res, _array_num);

    return _res;
}

int main()
{
    array = numGenerate(array_num);

    printf("in main() ");
    printArray(array, array_num);

    return 0;
}