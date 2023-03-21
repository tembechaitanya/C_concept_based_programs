//nested structure

#include<stdio.h>

struct Hello
{
    int A;
    int B;
};

struct Demo
{
    int C;
    int D;
    struct Hello hobj;
};


int main()
{
    struct Demo dobj;

    dobj.D = 40;
    dobj.C = 30;
    dobj.hobj.B = 20;
    dobj.hobj.A = 10;

    printf("\n%d",dobj.hobj.A);
    printf("\n%d",dobj.hobj.B);
    printf("\n%d",dobj.C);
    printf("\n%d",dobj.D);


    return 0;
}