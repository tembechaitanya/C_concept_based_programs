#include<stdio.h>

extern int Addition();

int main()
{   
    extern int a ;
    extern int b ;
    extern int Ans;
    
    auto int iRet = 0;

    iRet = Addition();
    printf("Addition is %d \n",iRet);

    return 0;
}