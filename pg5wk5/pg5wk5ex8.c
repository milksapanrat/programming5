#include <stdio.h>
int score[4][3] = {{91, 63, 78}, 
                {67, 72, 47}, 
                {89, 58, 53}, 
                {33, 54, 34}};

char name[4][20] = {"Kanto", 
                    "Takahashi", 
                    "Ito", 
                    "Watanabe"};
float avg = 0;

int main()
{
    printf("Name      National Language  English     Math   Average\n");
    for(int i = 0; i < 4; i++)
    {
        avg = (score[i][0] + score[i][1] + score[i][2]) / 3.0;
        printf("%-10s  %-15d  %-10d  %-6d  %.2f\n", name[i], score[i][0], score[i][1], score[i][2], avg);
    }
}
