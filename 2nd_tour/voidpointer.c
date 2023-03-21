#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 10;
    float f = 12.21f;
    double d = 1211.21212;

    char *cptr = &ch;
    int *iptr = &i;
    float *fptr = &f;
    double *dptr = &d;

    //void *vp = &ch;
    void *vp =  &i;

    printf("Data refer by vp %c \n", *(char *)vp);  
    printf("Data refer by vp %d \n", *(int *)vp);   



    return 0;
}