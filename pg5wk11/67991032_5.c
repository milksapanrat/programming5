#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;

    printf("Enter array size: ");
    scanf("%d", &N);

    int *arr = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter target number to search: ");
    scanf("%d", &target);

    int count = 0;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] == target) {
            count++;
        }
        sum += arr[i];
    }

    printf("Target %d found %d time(s).\n", target, count);
    printf("Average value of elements: %.2f\n", (double)sum / N);

    free(arr);
    printf("Memory successfully freed.\n");
    return 0;
}
