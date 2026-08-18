#include <stdio.h>

int start_idx = 1;
int end_idx = 10;

int main()
{
    int i = start_idx;
    
    while(i<(end_idx+1))
    {
        printf("%d ", i);
        i++;
    }
}