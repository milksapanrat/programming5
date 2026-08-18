#include <stdio.h>

float f;
int i;
int countFloat = 0;
int countInt = 0;

int main()
{
    for(f=0.01; f<1; f+=0.01)
    {
        countFloat++;
    }
    printf("-------------------\n");
    for(i=1; i<100; i+=1)
    {
        countInt++;
    }
    printf("float loop: %d int loop: %d", countFloat, countInt);
    return 0;
}