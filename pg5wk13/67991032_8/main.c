#include <stdio.h>
#include "physics.h"

int main() {
    float mass;
    float acceleration;
    float force;

    printf("Enter mass (kg): ");
    scanf("%f", &mass);

    printf("Enter acceleration (m/s^2): ");
    scanf("%f", &acceleration);

    force = calculateForce(mass, acceleration);

    printf("Force: %.2f N\n", force);

    return 0;
}