// Lilac Walia | Dec 21, 2020
// test github contribution error - checking in with correct email

#include <stdio.h>

//Printing the entire table
void PrintCharTable()
{
    char c = 'a';

    int i = 1;

    while( i <= 256)
    {
        putchar(c);
        c = c + 1;

        i = i + 1;
    }
    
    printf("\n\n");
    
    return;
}

void Print2z()
{
    char c;

    printf("Please enter a lower case letter from the alphabet.\n\n");

    c = getchar();
    while(c != '{')
    {
        putchar(c);
        c = c + 1;
    }

    return;
}

int main()
{
    PrintCharTable();
    Print2z();

    return 1;
}