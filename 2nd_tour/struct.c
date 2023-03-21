
#include<stdio.h>


struct Demo{

    int a;
    int b;
    char c;
    float d;
};

int main()
{
    struct Demo D;

    D.a = 10;
    D.b = 20;

    printf("%d \n", D.a);
    printf("%d \n", D.b);
    printf("size of object of Demo %d bytes \n", sizeof(D));

    return 0;
}