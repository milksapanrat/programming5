#include <stdio.h>
#include <ctype.h>

int main()
{
    char A;

    while (1)
    {
        printf("Enter A: ");
        scanf(" %c", &A);

        if (isdigit(A))
        {
            switch (A)
            {
                case '0':
                    printf("Super Lucky\n");
                    break;
                case '1':
                    printf("Lucky\n");
                    break;
                case '2':
                    printf("Normal\n");
                    break;
                case '3':
                    printf("Bad\n");
                    break;
                case '4':
                    printf("Super Bad\n");
                    break;
                default:
                    printf("Invalid input\n");
            }
        }
        else
        {
            if (A == '*')
            {
                break;
            }
            else
            {
                printf("not digit\n");
            }
        }
    }
    return 0;
}

