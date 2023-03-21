// array pointer correlation

#include<stdio.h>

int main()
{
	int arr[5] = {10,20,30,40,50};
	
	printf("\n size of array %d bytes \n",sizeof(arr));
	printf(" third element of array is %d \n", arr[2]);
	printf(" %d \n", arr+1);		//base address + 1 ->(will goes forward by 4 bytes)
	printf(" %d \n",&arr); 			//base address
	printf(" %d \n", (&arr)+1);		//last array address + 1
	printf(" %d \n",&arr[4]);
	
	printf(" %d \n", arr[2]);
	printf(" %d \n", *(arr + 2));   //base address 'element' + 2
	printf(" %d \n", *(2 + arr));
	printf(" %d \n", (2 + arr));
	
	
	return 0;
}
