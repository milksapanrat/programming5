#include <stdio.h>
#include <string.h>

int main() {
    int score = 100;
    int *ptrScore = &score;

    *ptrScore = 85; 
    printf("Score: %d\n", score);
}