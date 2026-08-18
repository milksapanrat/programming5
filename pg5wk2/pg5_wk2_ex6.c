#include <stdio.h>

int main(){
    char initial = 'A';
    int bonus = 5;
    int mystery1 = initial + bonus;

    int mystery2 = 7.85 + 2;
    
    float mystery3 = 10 + 2.5;

    printf("Mystery 1: %d\n", mystery1);
    printf("Mystery 2: %d\n", mystery2);
    printf("Mystery 3: %f\n", mystery3);

    return 0;
}