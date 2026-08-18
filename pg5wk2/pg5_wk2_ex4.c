#include <stdio.h>

int main(){
    // 1. Promotion (The Safe Path): int to float
    // C adds .000000 automatically
    float myFloat = 9;
    printf("1. Promotion (9 to float): %f\n", myFloat);

    // 2. Demotion/Truncation (The Danger Path): double to int
    // C doesn't round to 10; it simply kills the decimals.
    int myInt = 9.99;
    printf("2. Truncation (9.99 to int): %d\n", myInt);

    // 3. Character Promotion: char to int
    // Every letter has a hidden number (ASCII)
    char myLetter = 'A';
    int letterAsNumber = myLetter;
    printf("3. Character 'A' as an integer: %d\n", letterAsNumber);

    // 4. Mathematical Mixing: int + float
    // In math, C promotes the '5' to '5.0' before adding.
     printf("4. Mixing Math (5 + 2.5): %f\n", 5+2.5);

    return 0;
}