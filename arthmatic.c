#include<stdio.h>

int Addition(int iVal1, int iVal2)
{    
    int ret = 0;
    ret = iVal1 + iVal2;
    return ret;
}

int Subtraction(int iVal1, int iVal2)
{
    int ret = 0;
    ret = iVal1 - iVal2;
    return ret;
}

int Multiplication(int iVal1, int iVal2)
{
    int ret = 0;
    ret = iVal1 * iVal2;
    return ret;
}

int Divison(int iVal1, int iVal2)
{
    int ret = 0;
    ret = iVal1 / iVal2;
    return ret;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iAns = 0;

    printf("\nSimple Arthmatic Equations on Provided Numbers\n");

    printf("please enter two integers for Addition : \n");
    scanf("%d%d", &iNo1, &iNo2);
    iAns =  Addition(iNo1, iNo2);
    printf("Addition of two numbers is : %d \n", iAns);

    printf("please enter two integers for Subtraction : \n");
    scanf("%d%d", &iNo1, &iNo2);
    iAns =  Subtraction(iNo1, iNo2);
    printf("Subtraction of two numbers is : %d \n", iAns);

    printf("please enter two integers for Multiplication : \n");
    scanf("%d%d", &iNo1, &iNo2);
    iAns =  Multiplication(iNo1, iNo2);
    printf("Multiplication of two numbers is : %d \n", iAns);

    printf("please enter two integers for Divison : \n");
    scanf("%d%d", &iNo1, &iNo2);
    iAns =  Divison(iNo1, iNo2);
    printf("Divison of two numbers is : %d \n", iAns);


    return 0;
}