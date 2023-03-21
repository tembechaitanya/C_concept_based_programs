#include<stdio.h>

static int a = 10;

int Hello()
{
    a++;
    printf("Value of a is %d \n",a);
}

int main()
{
    Hello();
    Hello();
    Hello();
    Hello();

    return 0;
}