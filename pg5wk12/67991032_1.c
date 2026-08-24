#include <stdio.h>

struct Student {
    int id;
    float gpa;
};

int main() {
    struct Student student1 = {67991032, 4.00};

    printf("Student ID: %d\n", student1.id);
    printf("Student GPA: %.2f\n", student1.gpa);
    return 0;
}