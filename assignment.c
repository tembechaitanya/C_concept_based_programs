// predict the output assignment 10 que no 8


#include<stdio.h>

int main()
{
	int no = 10;
	int *p = NULL;
	p = &no;
	
	printf("\n %d \n",no);		//10
	printf(" %d \n", *p);		//10 : data store in which holding address
	
	*p = 11;
	
	printf(" %d \n", no);		//11
	printf(" %d \n", *p);		//11
	
	
	
	return 0;
}
