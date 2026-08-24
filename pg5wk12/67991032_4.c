#include <stdio.h>

typedef struct {
    int id;
    float salary;
} Employee;

int main() {
    Employee staff[3] = {{1, 50000.00}, {2, 60000.00}, {3, 70000.00}};
    for (int i = 0; i < 3; i++) {
        printf("Employee %d -> ID: %d, Salary: $%.2f\n", i+1, staff[i].id, staff[i].salary);
    }
    return 0;
}