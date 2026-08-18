#include <stdio.h>

int main()
{
    int i=0;
    int data[100];
    int buf=0;
    printf("How many? >>");
    scanf("%d", &i);
    for(int j=0; j<i; j++)
    {
        printf("# %d number =", j+1);
        scanf("%d", &data[j]);
    }
    for(int j=0; j<i-1; j++)
    {
        for(int n=0; n<i-1-j; n++)
        {
            if(data[n] > data[n+1])
            {
                buf = data[n];
                data[n] = data[n+1];
                data[n+1] = buf;
            }
        }
    }
    printf("Sorted numbers are:\n");
    for(int j=0; j<i; j++)
    {
        printf("%d\n", data[j]);
    }
    return 0;
}