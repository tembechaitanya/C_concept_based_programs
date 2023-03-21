#include<stdio.h>
int main()
{
    int No = 10;
    int *p = &No;
    int **q= &p;


    printf("\nNo stored value : %d \n",No);
    printf("%d : is address of No variable \n", p);
    printf("Value of *p is : %d \n",*p);

    printf("%d : is address of varible p \n",q);
    printf("%d : is value stored in *q \n", *q);
    printf("%d : is value stored in **q \n", **q);

    return 0;
}