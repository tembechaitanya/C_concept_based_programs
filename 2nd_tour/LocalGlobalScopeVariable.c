
#include<stdio.h>
int x = 10;

int Addition()
{
    int y = 20;
    int Add = 0;
    Add = x + y;
    return Add;
}

int main()
{
    int iRet = 0;
    iRet = Addition();
    printf("Addition is %d ", iRet);

    return 0;
}