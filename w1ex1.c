// #include <stdio.h>
// int main(){
//     printf("Student ID: 67991032\nName: Sapanrat Samerwong");
//     return 0;
// }

// #include <stdio.h>

// int main(void){
//     int n1, n2;
//     int a_ans, d_ans, m_ans, r_ans;

//     printf ("Please enter two integers \n");
//     printf ("integer 1: ");
//     scanf("%d", &n1);
//     printf ("integer 2: ");
//     scanf("%d", &n2);

//     printf ("%d + %d = %d\n", n1, n2, n1+n2);
//     printf ("%d - %d = %d\n", n1, n2, n1-n2);
//     printf ("%d * %d = %d\n", n1, n2, n1*n2);
//     printf ("%d / %d = %d\n", n1, n2, n1/n2);
//     printf ("%d %% %d = %d\n", n1, n2, n1%n2);

//     return 0;
// }

#include <stdio.h>
int main(){
    float n1, n2, n3, area;
    printf ("Enter the length of the upper base (a): ");
    scanf("%f", &n1);
    printf ("Enter the length of the lower base (c): ");
    scanf("%f", &n2);
    printf ("Enter the height (d): ");
    scanf("%f", &n3);

    area = (n1+n2)*n3/2;
    printf ("The area of the trapezoid is: %.2f\n", area);
    
}
