//program for additions of numbers in array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr = NULL;
	int iSize = 0;
	int i = 0;
	int iSum = 0;
	
	printf("\n enter how many numbers do u want \n");
	scanf("%d",&iSize);
	
	arr = (int *)malloc(iSize * sizeof(int));
	printf("\n Memory allocated sucessfully \n");
	
	printf("\n Enter the elements : \n");
	for(i=0; i<iSize; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<iSize; i++)
	{
		iSum = iSum + arr[i];
	}
	
	printf("\n Addition is %d \n", iSum);
	
	free(arr);
	
	printf("\n Memory gets deallocated \n");
	
	
	
	return 0;
}
