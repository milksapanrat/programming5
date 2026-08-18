#include <stdio.h>

int main(){
    int A = 1, B = 0;
    printf("%d && %d =%d\n", A, B, A && B);
    printf("%d || %d =%d\n", A, B, A || B);
    printf("!(%d && %d) = %d\n", A, B, !(A && B));
    return 0;
}