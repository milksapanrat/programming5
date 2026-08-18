#include <stdio.h>

int main(){
    char name[21];
    int i;
    int num_char = 0;

    printf("Please enter a string of up to 20 characters: ");
    scanf("%s", name);

    for (i=0; name[i]!='\0'; i++){
        num_char = num_char+=1;
    }
    printf("The entered string has %d alphabetic characters.\n", num_char);
    return 0;
}