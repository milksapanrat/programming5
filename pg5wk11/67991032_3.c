#include <stdio.h>
#include <stdlib.h>

int *getscore()
{
    int *score = malloc(3 * sizeof(int));

    if (score == NULL)
    {
        return NULL;
    }

    score[0] = 85;
    score[1] = 90; 
    score[2] = 95;

    return score;
}

int main(void)
{
    int *ptr = getscore();

    printf("Scores: %d, %d, %d\n", ptr[0], ptr[1], ptr[2]);

    free(ptr);

    return 0;
}