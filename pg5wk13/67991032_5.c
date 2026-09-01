#include <stdio.h>

int main() {
    int errorCode;
    char errorMessage[51];

    printf("Enter Error Code: ");
    scanf("%d", &errorCode);
    getchar(); 
    
    printf("Enter Error Message (no spaces): ");
    scanf("%50s", errorMessage);

    FILE *fp = fopen("log.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    fprintf(fp, "[%d]: %s\n", errorCode, errorMessage);

    fclose(fp);

    return 0;
}