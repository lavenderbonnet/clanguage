// Lilac Walia | Dec 22, 2020

#include <stdio.h>

#define TRUE 1

long charCount(FILE *fp)
{
    long nc;

    //nc = Number of Characters

    int c;

    nc = 0;
    while(TRUE)
    {
        c = fgetc(fp);
        if(c==EOF) break;        
        nc++;

        // '++' means add one
        // So '--' would mean subtract one
    }

    return nc;
}

long lineCount(FILE *fp)
{
    long lc;
    int c;

    lc = 0;
    while(TRUE)
    {
       c = fgetc(fp);
       if(c==EOF) break;

       if(c=='\n') lc++;
    }

    return lc;
}

long wordCount(FILE *fp)
{
    long wc;
    int c;

    wc = 0;
    while(TRUE)
    {
        c = fgetc(fp);
        if(c==EOF) break;

        if(c==' '||c=='.'||c=='\n'||c=='!'||c=='\t'||c=='?') wc++;
    }

    return wc;
}

main(int argc, char **argv)
{
    FILE *fp = NULL;
    fp = fopen(argv[1], "r");
    
    long nc = charCount(fp);
    fseek(fp, 0, SEEK_SET);
    long lc = lineCount(fp);
    fseek(fp, 0, SEEK_SET);
    long wc = wordCount(fp);

    fclose(fp);
    printf("Chars in file: %d\n", nc);
    printf("Lines in file: %d\n", lc);
    printf("Words in file: %d\n", wc);
}
