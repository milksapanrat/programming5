#include <stdio.h>
#include "geometry.h"

int main() {
    Room room = {12.5, 4};
    printf("Rectangle configured: %.2f x %.2f\n", room.length, room.width);
    return 0;
}