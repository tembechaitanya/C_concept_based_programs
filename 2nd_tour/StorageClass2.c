#include<stdio.h>

int main()
{
    auto int a = 10;
    auto int b = 20;
    auto int c = 0;

    auto float i = 0;

    for(i = 1.01f; i<= 10.01f; i++)
    {
        printf("%f \n", i);
    }

    c = a + b;

    printf("Addition of %d and %d is %d \n", a, b, c);

    return 0;
}