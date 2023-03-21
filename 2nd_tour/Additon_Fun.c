#include<stdio.h>

int Addition(int iVal1, int iVal2)
{
    int iRet = 0;
    iRet = iVal1 + iVal2;
    return iRet;
}

int main()
{
    int iNo1 = 0;
    // int iNo2 = 0;
    // int iAns = 0;

    // printf("Enter 1st number : \n");
    // scanf("%d", &iNo1);

    // printf("Enter 2nd number : \n");
    // scanf("%d", &iNo2);

    // iAns = Addition(iNo1, iNo2);

    // printf("Addition is  : %d \n", iAns);

    printf("Address of main function is %p \n", &main);
    printf("Address of iNo1 variable is %p \n", &iNo1);

    printf("Address of printf function is %p \n", &printf);
    printf("Address of printf function is %p \n", &scanf);
    printf("Address of #include ffile is %p \n", &(#include));

    return 0;
}