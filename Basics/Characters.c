//Dealing with character streams
/*Copy character stream input to character stream out put*/
//provided that characer is not passed the end-of-indicator

#include <stdio.h>
main()
{
    int c;
    c = getchar();
    //copy form input stream so long as end-of-file is not reached
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}