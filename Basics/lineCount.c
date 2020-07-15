//Counting input lines

#include <stdio.h>

main()
{

    int count, lineNumber;
    lineNumber = 0;

    while ((count = getchar()) != EOF)
        if (count == '\n')
            ++lineNumber;
    printf("%d\n", lineNumber);
}