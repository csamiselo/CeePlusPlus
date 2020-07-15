/* Counting the number of characters in a stream*/
#include <stdio.h>

main()
{
    long nc; //using diffrent data types we can account for data of different sizes i.e float,double
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%1d\n", nc);
}