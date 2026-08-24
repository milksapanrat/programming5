#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p1 = {5, 10};
    Point p2;

    p2 = p1;

    printf("p2 Coordinates: (%d, %d)\n", p2.x, p2.y);
    return 0;
}