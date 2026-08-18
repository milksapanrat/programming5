#include <stdio.h>
int main()
{
    int a[5] = {1, 1, 1, 1, 1};

    printf("Enter 5 integers: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Displaying integers:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
}