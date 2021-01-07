// Lilac Walia | Dec 20, 2020
// Gotta make a lo0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0op

#include <stdio.h>

void f2cTable()
{
    int f, c;
    int lower, upper, step;
    
    lower = 0;
    upper = 100;
    step = 10;
    f = lower;

    printf("F\tC\n\n");

    while (f <= upper)
    {
        c = 5 * (f-32) / 9;
        printf("%d\t%d\n", f, c);

        f = f + step;
    }

    return;
}

void c2fTable()
{
    int f, c;
    int lower, upper, step;
    
    lower = 0;
    upper = 100;
    step = 10;
    c = lower;

    printf("C\tF\n\n");

    while (c <= upper)
    {
        f = ((9.0/5.0)*c) + 32.0;
        printf("%d\t%d\n", c, f);

        // step
        c = c + step;
    }

    return;
}

void c2fFor()
{
    int c;
    for (c = 100; 0 <= c; c = c - 10)
    {
        printf("%d %f \n", c, ((9.0/5.0)*c) + 32.0);
    }
}

void f2cFor()
{
    int f;
    for (f = 100; 0 <= f; f = f - 10)
    {
        printf("%d %f \n", f, 5.0 * (f-32.0) / 9.0);
    }
}

main()
{
    c2fFor();
    printf("\n");
    f2cFor();
}