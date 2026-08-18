#include <stdio.h>
#include <string.h>

int main(){
    char firstname[20];
    char lastname[20];
    int length;

    printf("Enter first name: ");
    scanf("%19s", firstname);
    printf("Enter last name: ");
    scanf("%19s", lastname);

    length = strlen(firstname) + strlen(lastname);
    strcat(lastname, firstname);
    printf("Generated password: %s%d\n", lastname, length);
}