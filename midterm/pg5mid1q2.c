#include <stdio.h>
int main(){
    int age, time;
    float price;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your arrival time: ");
    scanf("%d", &time);

    // true if age is less than 12 or greater than 65
    if (age < 12 || age > 65){
        price = 5.00;
        // true if time is greater than 18
        if (time > 18){
            price = price * 0.8; // apply 20% discount
        }
    } else {
        price = 15.00; 
        // true if time is greater than 18
        if (time > 18){
            price = price * 0.8; // apply 20% discount
        }
    }

    printf("The price of the ticket is: $%.2f\n", price);

    return 0;
}