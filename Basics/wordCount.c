//Program to count the number of words in a character

#include <stdio.h>

#define IN 1  /*inside a word */
#define OUT 0 /* ostside a word*/

/* count the words lines and characters in input*/

main()
{
    int count, lineNumber, numberOfWords, numberCount, state;

    state = OUT;
    lineNumber = numberOfWords = numberCount = 0;

    while ((count = getchar()) != EOF)
    {
        ++numberCount;

        if (count == '\n ')
            ++numberCount;

        if (count == ' ' || count == '\n' || count == '/t')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++numberOfWords;
        }
    }
    printf("%d %d %d\n", lineNumber, numberOfWords, numberCount);
}