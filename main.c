#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp_celsius , temp_Fahrenheit;
    printf("Hello! this Converts a temperature in Celsius to Fahrenheit\n");
    printf("please insert temperature in Celsius: ");
    scanf("%f" ,&temp_celsius);
    temp_Fahrenheit=1.8*temp_celsius+32;
    printf("\ntemperature in Fahrenheit is  %f" ,temp_Fahrenheit);
    printf("\n\n");
    return 0;
}
