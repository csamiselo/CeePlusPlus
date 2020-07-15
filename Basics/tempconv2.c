#include <stdio.h>
//Program to convert degrees centigrade to farenheit
main()
{
    float fareinheit;
    float celsius;
    int lower, upper, step;

    lower = 0;   //temparature lower limit
    upper = 100; //temp upper limit
    step = 10;   //step size

    celsius = lower;
    while (celsius <= upper)
    {
        fareinheit = (celsius * 9) + (160) / 9;
        printf("Temperature conversion Chart from Celsius to degrees Farenheit");
        printf("%3.0f %6.1f\n", fareinheit, celsius);
        fareinheit = fareinheit + step;
    }
}