// Lilac Walia | Dec 27, 2020

#include <stdio.h>

#define TRUE 1


//Only include white spaces (' ', '/t', '/n')

int whiteSpaces(FILE *fp)
{
    int nw = 0;
    int c = 0;

    while(TRUE)
    {
        c = fgetc(fp);

        if(c == EOF) break;
        if(c == ' ' || c == '\t' || c== '\n') 
        {
            ++nw;
        }
    }
    return nw;
}




main(int argc, char **argv)
{
    FILE *fp = NULL;
    fp = fopen(argv[1], "r");

    int nw = 0;
    nw = whiteSpaces(fp);

    fclose(fp);
    printf("# of White Spaces %d\n", nw);
}