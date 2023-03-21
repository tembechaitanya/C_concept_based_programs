// predict the output assignment 10 que no 9

#include<stdio.h>

int main()
{
	float arr[] = {10.3, 43.4, 45.34, 234.45};
	
	float *p = NULL;
	float *q = NULL;
	
	p = arr;
	q = &(arr[3]);
	
	printf("\n %d \n",p);		//2000 : Address
	printf(" %d \n",q);			//1000 : Address
	
	printf(" %f \n", *q);		//234.45
	printf(" %f \n", *p);		//10.30
	printf(" %f \n", *(p+2)); 	//45.34
	printf(" %f \n",*(p+1));	//43.4
	printf(" %f \n", p[1]);		//43.4
	printf(" %f \n", *(2+arr));	//45.34
	printf(" %f \n", 0[arr]);	//10.3
	printf(" %f \n", q-p);		//10.30
	printf(" %f \n", *(q-2));	//43.40
	
	
	
	
	
	
	return 0;
}
