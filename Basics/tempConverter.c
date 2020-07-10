//A program to convert degrees Fareinheit to degrees celcius

#include<stdio.h>

main(){
    float fareinheit;
    float celsius;
    int lower,upper,step;
     
    lower = 0;//temparature lower limit
    upper = 300;//temp upper limit
    step = 20;//step size

    fareinheit = lower;
    while (fareinheit <= upper)
    {
        celsius = (5.0/9.0) * (fareinheit-32.0);
        printf("Temperature conversion Chart from farenhiet to degrees centigrade");
        printf("%3.0f %6.1f\n",fareinheit,celsius);
        fareinheit = fareinheit + step;
    }
}