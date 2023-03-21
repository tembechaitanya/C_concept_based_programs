/*
			   0  1  2  4
int Arr[4] = {10,20,30,40};

//consider the base address of Arr[0] = 100;
	
Arr[2];
*(Arr+2);
*(100+2(size of integer));
*(100+2(4));
*(100+8);
*108

*/

#include<stdio.h>
int main()
{
	int Arr[4] = {10,20,30,40};	
	
	printf("\nBase address of Arrays first element is %ld \n", &Arr[0]);
	printf("Base address of Arrays third element is %ld \n", &Arr[3]);
	
	printf("Element on index 2 is %d \n", Arr[2]);
	printf("Element on index 2 is %d \n", *(Arr+2));
	
}
