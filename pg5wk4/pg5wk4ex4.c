// #include <stdio.h>

// int start_idx = 1, end_idx = 10;

// int main()
// {
//     for(int i=start_idx; i<=end_idx; i++)
//     {
//         printf("i is %d \n", i);
//         if (i == 5){
//             break;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>

// int start_idx = 1;
// int end_idx = 10;

// int main()
// {
//     int i = start_idx;
    
//     while(i<(end_idx+1))
//     {
//         printf("%d ", i);
//         if (i == 5){
//             break;
//         }
//         i++;
//     }
// }

#include <stdio.h>

int start_idx = 1; 
int end_idx = 10;

int main()
{
    int i = start_idx;
    
    do
    {
        printf("%d ", i);
        if (i == 5){
            break;
        }
        i++;
    } while(i<(end_idx+1));
    return 0;
}