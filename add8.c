#include<stdio.h>

int Addition(int iVal1, int iVal2)
{
    int ret = 0;
    ret = iVal1 + iVal2;
    return ret; 
}

int main()
{
    int iNo1, iNo2;
    int Ans = 0;

    printf("\nEnter two number integer for addition :\n");
    scanf("%d%d", &iNo1, &iNo2);

    Ans = Addition(iNo1, iNo2);
    printf("Addition of two numbers is %d \n", Ans);

    return 0;
}