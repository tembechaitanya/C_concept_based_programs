//pointers in structure

#include<stdio.h>

struct Hello
{
    int *ip;
    float *fp;
    double *dp;
    char *chp;
};


int main()
{
    int i = 10;
    float f = 11.11f;
    double d = 1233.12;
    char ch = 'A';

    struct Hello hobj;

    hobj.ip = &i;
    hobj.fp = &f;
    hobj.dp = &d;
    hobj.chp = &ch;

    printf("\n%ld \n", hobj.ip);
    printf("%ld \n", hobj.fp);
    printf("%ld \n", hobj.dp);
    printf("%ld \n", hobj.chp);      

    printf("\n%ld \n",&i);  
    printf("%ld \n",&f);      
    printf("%ld \n",&d);  
    printf("%ld \n",&ch);  

    return 0;
}