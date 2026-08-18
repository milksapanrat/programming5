#include <stdio.h>
int a[3][4] = {{0, 1, 2, 3}, 
                {4, 5, 6, 7}, 
                {8, 9, 10, 11}};

int main()
{
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 4; c++)
        {
            printf("a[%d][%d] = %d\n", r, c, a[r][c]);
        }
        printf("\n");
    }
    return 0;
}