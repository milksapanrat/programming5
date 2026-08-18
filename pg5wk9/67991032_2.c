#include <stdio.h>
#include <string.h>

int main() {
    char str1[30];
    char str2[30];
    char str3[30];
    char temp[30];

    printf("Enter 1st string: ");
    scanf("%29s", str1);
    printf("Enter 2nd string: ");
    scanf("%29s", str2);
    printf("Enter 3rd string: ");
    scanf("%29s", str3);

    //compare str1 and str2
    if (strlen(str1) > strlen(str2) || 
       (strlen(str1) == strlen(str2) && strcmp(str1, str2) > 0)) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
       }

    //compare str2 and str3
    if (strlen(str2) > strlen(str3) ||
       (strlen(str2) == strlen(str3) && strcmp(str2, str3) > 0)) {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
       }

    //compare str1 and str2 again
    if (strlen(str1) > strlen(str2) || 
       (strlen(str1) == strlen(str2) && strcmp(str1, str2) > 0)) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
       }

    printf("Sorted strings:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    return 0;
}