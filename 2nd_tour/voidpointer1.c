#include<stdio.h>

void fun()
{
    printf("\nThsi is fun function\n");
}

int main()
{
    int (*fptr)();
    fptr = fun;
    fptr();

    return 0;
}