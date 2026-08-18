// #include <stdio.h>

// int start_idx = 1, end_idx = 10;

// int main()
// {
//     for(int i=start_idx; i<=end_idx; i++)
//     {
//         if (i % 2 == 0){
//             continue;
//         }
//         printf("i is %d \n", i);
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
//         if (i % 2 == 0){
//             i++;
//             continue;
//         }
//         printf("%d ", i);
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
        if (i % 2 == 0){
            i++;
            continue;
        }
        printf("%d ", i);
        i++;
    } while(i<(end_idx+1));
    return 0;
}