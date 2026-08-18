#include <stdio.h>

int main(){
    // 1. Fixing Math: Integer Division
    // Without (float), 5/2 would be 2.000000.
    // By casting 5, we force the math to result in 2.5.
    float sum = (float) 5 / 2;
    printf("1. Explicit Math (5/2): %f\n", sum);

    // 2. The "Receipt" Trick: float to int
    // Intensionally ignoring the cents to show just the dollar amount.
    float price = 19.99;
    int dollars = (int) price;
    printf("2. Price Truncation ($19.99): %d dollars\n", dollars);

    // 3. The ASCII Decoder: int to char
    // Forcing a number to show up as its alphabetical symbol.
    int secretCode = 71;
    printf("3. Secret Code 71 is the letter: %c\n", (char) secretCode);

    // 4. Casting Variables
    // You don't just cast numbers; you can cast variables in a formula.
    int score = 85;
    int totalPossible = 90;
    float percentage = ((float) score / totalPossible) * 100;
    printf("4. Exam Score: %.2f%%\n", percentage);
}