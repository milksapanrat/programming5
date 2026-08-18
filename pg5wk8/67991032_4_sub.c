#include <stdio.h>

extern float arr[3][3];
extern float arr2[3][3];

void hadamardproduct() {
    float result[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = arr[i][j] * arr2[i][j];
            printf("Hadamard product matrix at [%d][%d]: %.2f\n", i, j, result[i][j]);
        }
    }
}