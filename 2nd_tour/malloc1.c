#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int i = 0;
    int *ptr = NULL;
    int iSum = 0;
    int iMul = 1;
    int iEven = 0;


    printf("\nEnter the size of array : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements: \n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Elements entered by u are : \n");
    for(i = 0; i<iSize; i++)
    {
        printf("%d\n", ptr[i]);
    }

    printf("Addition of given elements is : \n");
    for(i = 0; i<iSize; i++)
    {
        iSum = iSum + ptr[i];
    }
    printf("%d\n",iSum);

    printf("Multiplication of given elements is : \n");
    for(i = 0; i<iSize; i++)
    {
        iMul = iMul * ptr[i];
    }
    printf("%d\n",iMul);

    printf("Even count in the list : \n");
    {
        for(i = 0; i<iSize; i++)
        {
            if((ptr[i] % 2 == 0))
            {
               iEven++; 
            }
        }

    printf("%d\n",iEven);    
    }

    return 0;
}