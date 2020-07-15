#include <stdio.h>
/* Tempararture calculator program implemented using for loop in C
    also using symbolic constatnts by using the #efine key word */

    //Define upper lower and step limits using the #define keywords 
    #define LOWER 0
    #define UPPER 300
    #define STEP 20
main()
{

    int fahrenheit;

    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
    {
        printf("%3d %6.1f\n", fahrenheit, (5.0 / 9.0) * (fahrenheit - 32));
    }
}