#include <stdio.h>
#include <string.h>

int main() {
    int a = 10;
    int b = 20;
    int *ptr = NULL;

    ptr = &a;
    *ptr += 5;
    printf("Address of a: %p | Value of ptr: %p | Address of ptr: %p\n", (void *)&a, (void *)ptr, (void *)&ptr);
    
    ptr = &b;
    *ptr -= 5;
    printf("Address of b: %p | Value of ptr: %p | Address of ptr: %p\n", (void *)&b, (void *)ptr, (void *)&ptr);

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    return 0;
}
