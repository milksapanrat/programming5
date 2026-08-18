#include <stdio.h>

int start_idx = 1;

int main()
{
    int i = start_idx;
    int end_idx;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &end_idx);

    while(i<=end_idx)
    {
        sum += i;
        i++;
    }
    printf("%d ", sum);
    return 0;
}