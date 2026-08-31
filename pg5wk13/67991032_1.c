#include <stdio.h>

struct STUDENT {
    char firstName[15];
    char lastName[15];
    char id[9];
    int age;
};

int main() {
    struct STUDENT student1 = {"John", "Smith", "12345678", 20};

    struct STUDENT *pointer = &student1;

    printf("Original: %s %s, ID: %s, Age: %d\n", pointer->firstName, pointer->lastName, pointer->id, pointer->age);

    printf("\nEnter new ID (max 8 chars): ");
    scanf("%8s", pointer->id);
    printf("Enter new age: ");
    scanf("%d", &pointer->age);

    printf("\nUpdated Details:\n");
    printf("Name: %s %s\n", pointer->firstName, pointer->lastName);
    printf("ID: %s\n", pointer->id);
    printf("Age: %d\n", pointer->age);

    return 0;
}