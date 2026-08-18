// #include <stdio.h>

// int main(){
//     char name[6]={'K', 'o', 's', 'e', 'n', '\0'};
//     int i;

//     for (i=0; name[i]!='\0'; i++){
//         printf("%c\n", name[i]);
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    char name[]="KMITL";
    int i;

    for (i=0; name[i]!='\0'; i++){
        printf("%c\n", name[i]);
    }
    return 0;
}