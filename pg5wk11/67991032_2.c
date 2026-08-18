#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arraysize;

    printf("Enter array size: ");
    scanf("%d", &arraysize);

    int *ptr = malloc(arraysize * sizeof(int));

    if (ptr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < arraysize; i++)
    {
        ptr[i] = i*i;
    }

    printf("Array elements: ");
    for (int i = 0; i < arraysize; i++)
    {
        printf("%d ", ptr[i]);
    }
    

    free(ptr);

    return 0;
}