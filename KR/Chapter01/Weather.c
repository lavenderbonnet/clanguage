//Lilac Walia | Dec 17, 2020
//C=(5/9)(F-32)

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */
#include <stdio.h>

int f2c(int f)
{
    int c = (5/9)*(f-32);
    return c;
}

int c2f(int c)
{
    int f = 0;
    f = ((9/5)*c) + 32;
    return f;
}

float f2c2(float f)
{
    float c = 0.0;
    c = (5.0/9.0)*(f-32.0);
    return c;
}

float c2f2(float c)
{
    float f = 0.0;
    f = ((9.0/5.0)*c) + 32.0;
    return f;
}

void test_1()
{
    int f = 50;
    int c = f2c(f);
    printf("%d , %d \n", f, c);

    f = c2f(c);
    printf("%d , %d \n", f, c);
    return;
}

void test_2()
{
    float f = 98.6;
    float c = f2c2(f);
    printf("%f , %f \n", f, c);

    f = c2f2(c);
    printf("%f , %f \n", f, c);
    return;
}

void ice()
{
    float c = 0.0;
    float f = c2f2(c);
    printf("%f , %f \n", f, c);
}

void boil()
{
    float c = 100.0;
    float f = c2f2(c);
    printf("%f , %f \n", f, c);
}

main()
{
    test_1();
    test_2();
    ice();
    boil();
}