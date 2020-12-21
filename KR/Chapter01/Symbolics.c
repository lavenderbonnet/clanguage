// Lilac Walia | Dec 21, 2020

#include <stdio.h>


#define lower 0
#define upper 100
#define step 10

main()
{
    int f;

    for (f = lower; f <= upper; f = f + step)
    printf("%d %f\n", f, (5.0/9.0)*(f-32.0));
}