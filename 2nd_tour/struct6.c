//we can create array of structure objects

#include<stdio.h>

struct Demo
{
    int i;
    float f;
};


int main()
{   
    struct Demo Arr[3];

    Arr[0].i = 10;
    Arr[0].f = 11.11f;

    Arr[1].i = 11;
    Arr[1].f = 21.21f;

    Arr[2].i = 21;
    Arr[2].f = 31.31f;

    printf("\n%d\n",Arr[0].i);
    printf("%f\n",Arr[2].f);

    return 0;
}