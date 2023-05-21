#include <stdio.h>
#include "Conversor.h"

int main(){
    double kelvin, celsius, fahrenheit;
    scanf("%lf %lf %lf", &kelvin, &celsius, &fahrenheit);
    
    printf("Celsius para Fahrenheit: %lf \n", Celsius_para_Fahrenheit(celsius));
    printf("Celsius para Kevin: %lf \n", Celsius_para_Kelvin(celsius));
    printf("Fahrenheit para Celsius: %lf \n", Fahrenheit_para_Celsius(fahrenheit));
    printf("Fahrenheit para Kelvin: %lf \n", Fahrenheit_para_Kelvin(fahrenheit));
    printf("Kelvin para Celsius: %lf \n", Kelvin_para_Celsius(kelvin));
    printf("Kelvin para Fahrenheit: %lf \n", Kelvin_para_Fahrenheit(kelvin));

    return 0;
}