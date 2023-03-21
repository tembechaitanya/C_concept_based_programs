
#include<stdio.h>
int main()
{

	int arr[4] = {10,20,30,40};  
	
	printf("\n element is %d \n", arr[3] - arr[0]);
	printf("\n element is %d \n", *(arr+2));	//arr[2];
	printf("\n element is %d \n", *(2+arr));	//arr[2];
	printf("\n element is %d \n", 2+arr[0]); 	//12
	printf("\n element is %d \n", 2*arr[0]); 	//20
	printf("\n element is %d \n", &arr[6]);		//garbage4
	
	return 0;
}
