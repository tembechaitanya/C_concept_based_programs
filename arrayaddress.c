// array sequence and structure squence

#include<stdio.h>

struct Demo{
	
	int i;
	float j;
	double k;
	char l;
	
		
} D1 = {40,50.252,61.7897897,'N'};

int main()
{
	int arr[4] = {10,20,30,40}; 
	
	printf("\n %d \n %d \n %d \n %d \n", &arr[0], &arr[1], &arr[2], &arr[3]);
	
	printf("\n %d \n %d \n %d \n %d \n", &D1.i,&D1.j, &D1.k, &D1.l);
	
	return 0;
}

