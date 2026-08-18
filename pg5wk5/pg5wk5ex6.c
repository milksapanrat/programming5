#include <stdio.h>
int main()
{
    int a[5] = {54, 94, 80, 75, 66};
    int max = 0;
    float sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum += a[i];
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Sum of integers: %.2f\n", sum/(5));
    printf("Maximum integer: %d\n", max);
}