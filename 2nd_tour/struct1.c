//simple structure

#include<stdio.h>

struct Hello
{
    int i;
    double d;
    float f;
    char ch;
};


int main()
{
    struct Hello hobj;

    hobj.i = 10;
    hobj.d = 12.1212;
    hobj.f = 15.1212f;
    hobj.ch = 'A';

    printf("%d \n", hobj.i);
    printf("%lf \n", hobj.d);
    printf("%f \n",hobj.f);
    printf("%c \n",hobj.ch);


    return 0;
}