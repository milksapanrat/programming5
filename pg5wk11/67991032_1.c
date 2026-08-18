#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr = malloc(sizeof(int));

    if (ptr == NULL)
    {
        return 1;
    }

    *ptr = 2026;

    printf("Value stored in heap: %d\n", *ptr);

    free(ptr);

    return 0;
}