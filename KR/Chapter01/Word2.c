// Lilac Walia | Jan 6, 2020
// Count # of words in a file

// Needs a lot of work

#include <stdio.h>

#define IN 1    // Means it's "inside" a word
#define OUT 0   // Means it's "outside" a word

int WordCount(FILE *fp) //the FILE *fp is supposed to mean the file you gave the program
{
    long wc = 0;
    int c = 0;

    while(OUT)
    {
        c = fgetc(fp);
        if(c==EOF) break;


        if (c == ' ' || c == '\n' || c == '\t')
        {
            wc = OUT;
        }

        else if (wc == OUT)
        {
            if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z' || '0' <= c && c <= '9')
            {
                wc = IN;
                wc++;
            }
        }
    }
    return wc;
}


main(int argc, char **argv)
{
    FILE *fp = NULL;
    fp = fopen(argv[1], "r");
    
    long wc = WordCount(fp);

    fclose(fp);

    printf("Words in file: %d\n", wc);
}
