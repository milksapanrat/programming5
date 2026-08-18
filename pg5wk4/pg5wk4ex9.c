#include <stdio.h>
#include <string.h>

int main() {
    char studentID[9];
    int sum = 0;

    printf("Enter Student ID: ");
    scanf("%s", studentID);

    for (int i = 0; i < strlen(studentID); i++) {
        if (studentID[i] >= '0' && studentID[i] <= '9') {
            sum += studentID[i] - '0';
        }
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}