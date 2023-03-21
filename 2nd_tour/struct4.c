//pointer points to an object

#include<stdio.h>

struct Hello
{
    int i;
    float f;
    double d;
    char ch;
};


int main()
{
    struct Hello hobj;
    struct Hello *hptr = NULL;

    hptr = &hobj;

    hptr->i = 10;
    hptr->f = 10.323f;
    hptr->d = 11.125;
    hptr->ch = 'A';

    printf("\n%d\n",hptr->i);
    printf("%f \n",hptr->f);
    printf("%lf \n", hptr->d);
    printf("%c\n", hptr->ch);



    return 0;
}