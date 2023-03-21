// checking of same array

#include<stdio.h>

int main()
{
	int arr[3] = {20,60,80};
	int brr[3] = {20,60,80};
	
	printf("\n address of first element of arr variable is %p \n", &arr[0]);
	printf("\n address of first element of brr variable is %p \n", &brr[0]);

	
	
	if(arr == brr)
	{
		printf("\n both are same \n");
		
	}
	else
	{
		printf("\n both are different \n");
	}
	
	
	return 0;
}

// the output of program is of else part because address of two arrays wll never be the same!!!
