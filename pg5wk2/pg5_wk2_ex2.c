#include <stdio.h>
int main(){
    int a = 180;
    printf("a = %d \n", a);

    int b, c;
    b = 20.78;
    c = 30;
    printf("b= %d \nc= %d \n", b, c);

    int d = 40, e = 50;
    printf("d = %d \ne = %d \n", d, e);

    float n1 = 18.59;
    float n2 = 18.59;

    printf("number1 = %f\n", n1);
    printf("number1 = %.2f\n", n1);
    printf("number2 = %lf\n", n2);

    char test = 'A';
    printf("test = %c", test);

    return 0;
}