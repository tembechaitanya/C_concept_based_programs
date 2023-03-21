#include<stdio.h>

extern int Hello();
extern int a;

int main()
{
    Hello();

    printf("\nvalue of variable a is %d \n", a);

    return 0;
}