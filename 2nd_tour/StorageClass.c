#include<stdio.h>

int main()
{
    auto int A = 10;
    register int i = 0;
    

    for(i = 1; i<=10 ; i++)
    {
        printf("%d * %d     =   %d \n", A,i,A*i);
    }
    


    return 0;
}