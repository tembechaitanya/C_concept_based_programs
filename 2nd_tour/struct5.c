//self referencial structure

#include<stdio.h>

struct Demo
{
    int no;
    struct Demo *next;
}

int main()
{
    struct Demo dobj1;
    struct Demo dobj2;
    struct Demo dobj3;

    dobj1.no = 10;
    dobj2.no = 20;
    dobj3.no = 30;

    dobj1.next = &dobj2;
    dobj2.next = &dobj3;
    dobj3.next = NULL;


    return 0;
}