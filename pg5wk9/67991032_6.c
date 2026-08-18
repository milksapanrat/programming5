#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char a[20];
    printf("Enter your secret message: ");
    fgets(a, sizeof(a), stdin);
    char *ptr;

    ptr = &a[0];
    while (*ptr != '\0') {
        if (*ptr == 'a') {
            *ptr = '4';
        } else if (*ptr == 'e') {
            *ptr = '3';
        }
        ptr++;
        
    }
    printf("Encrypted message: %s\n", a);
    return 0;
}