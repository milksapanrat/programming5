#include <stdio.h>

int main(){
    char f_string[11], s_string[11];
    char combined[23];
    int i, j;

    printf("Please enter a string of up to 20 characters: ");
    scanf("%10s", f_string);
    printf("Please enter a string of up to 20 characters: ");
    scanf("%10s", s_string);

    for (i=0; f_string[i]!='\0'; i++){
        combined[i] = f_string[i];
    }

    combined[i] = ' ';
    i++;

    for (j=0; s_string[j]!='\0'; j++, i++){
        combined[i] = s_string[j];
    }

    combined[i] = '\0';

    printf("The combined string is: %s\n", combined);
    return 0;
}