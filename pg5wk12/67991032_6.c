#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    char task_name[50];
    Date deadline;
} Task;

int main() {
    Task task[2] = {{"Math Assignment", {20, 8, 2026}},
                  {"Physics Lab Report", {25, 8, 2026}}};

    for (int i = 0; i < 2; i++) {
        printf("Task: %s | Deadline: %02d/%02d/%04d\n", task[i].task_name, task[i].deadline.day, task[i].deadline.month, task[i].deadline.year);
    }
    return 0;
}