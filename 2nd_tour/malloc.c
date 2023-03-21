#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    
    printf("\nEnter the element size : \n");
    scanf("%d", &iSize);
    
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("Memory get sucessfully\n");

    printf("Enter the elements according to size: \n");
    for(int iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements are :\n");
    for(int iCnt = 0; iCnt< iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    free(ptr);
    printf("Memory vanished sucessfully\n");

    return 0;
}