#include <stdio.h>

int main(){
    // If we want to change the value later, we need to remove const.
    float PI = 3.14159;

    printf("The value of PI is: %f\n", PI);

    PI = 3.14159265;

    printf("The updated value of PI is: %f\n", PI);

    return 0;
}