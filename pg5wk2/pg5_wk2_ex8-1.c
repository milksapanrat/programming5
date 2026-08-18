#include <stdio.h>

int main(void){
    int A = 13, B = 5;
    float x = 13.0, y = 5.0;
    printf("A+B=%d \t |\t x+y=%f\n", A+B, x+y);
    printf("A-B=%d \t |\t x-y=%f\n", A-B, x-y);
    printf("A*B=%d \t |\t x*y=%f\n", A*B, x*y);
    printf("A/B=%d \t |\t x/y=%f\n", A/B, x/y); 
    printf("A%%B=%d \t |\t x%%y=%f\n", A%B, (float)((int)x%(int)y));

    A++;
    x++;
    printf("A++=%d\t |\t x++=%f\n", A, x);

    A--;
    x--;
    printf("A--=%d\t |\t x--=%f\n", A, x);

    return 0;
}