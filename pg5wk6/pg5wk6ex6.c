#include <stdio.h>

int main() {
    int score[7][3];
    int total_subject[3] = {0, 0, 0};
    double avg_student[7];
    int i, j;

    printf("Enter 7 students score {English, Math, Science}\n");

    for(i = 0; i < 7; i++) {
        printf("# %d students score\n", i + 1);
        scanf("%d %d %d",
              &score[i][0],
              &score[i][1],
              &score[i][2]);

        avg_student[i] =
            (score[i][0] + score[i][1] + score[i][2]) / 3.0;

        total_subject[0] += score[i][0];
        total_subject[1] += score[i][1];
        total_subject[2] += score[i][2];
    }

    printf("\n");
    printf("    | English  Math  Sci. | Average\n");
    printf("-------------------------------------\n");

    for(i = 0; i < 7; i++) {
        printf("%3d | %7d %5d %5d | %7.2f\n",
               i + 1,
               score[i][0],
               score[i][1],
               score[i][2],
               avg_student[i]);
    }

    printf("-------------------------------------\n");

    printf("total| %7d %5d %5d |\n",
           total_subject[0],
           total_subject[1],
           total_subject[2]);

    printf("ave. | %7.2f %5.2f %5.2f |\n",
           total_subject[0] / 7.0,
           total_subject[1] / 7.0,
           total_subject[2] / 7.0);

    return 0;
}