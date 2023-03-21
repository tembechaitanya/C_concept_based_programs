#include<stdio.h>

int TP()
{
    static int iRet = 20;
    iRet++;
    printf("%d \n", iRet);

    TP(); 
}

int main()
{
    TP();
    TP();
    TP();
    TP();
    
    return 0;
}