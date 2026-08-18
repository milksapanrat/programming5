#include <stdio.h>
int main(){
    float pi = 3.14159;
    double rad, height, volume;
    
    printf ("Enter the radius of the cylinder: ");
    scanf("%lf", &rad);
    printf ("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    volume = pi * rad * rad * height;
    printf ("The volume of the cylinder is: %.3f\n", volume);
    return 0;
    
}
