#include <stdio.h>
int main(){
    int base, limit;
    int result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the limit: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++){
        result = result * base;
        if (result == 64) {
            continue; // skip printing if result is 64
        }
        if (result > 1000) {
            break; // exit the loop if result exceeds 100
        }
        printf("%d^%d = %d\n", base, i, result);
    }
    return 0;
}