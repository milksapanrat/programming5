# include <stdio.h>

int main(){
    float celcius, fahrenheit;

    printf("Enter temperature in celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9/5) + 32;

    printf("Temperature in fahrenheit = %.2f\n", fahrenheit);

    return 0;

}