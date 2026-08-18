#include <stdio.h>

int start_idx = 1; 
int end_idx = 10;

int main()
{
    int i = start_idx;
    
    do
    {
        printf("%d ", i);
        i++;
    } while(i<(end_idx+1));
    return 0;
}