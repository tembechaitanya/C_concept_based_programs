//array positions

#include<stdio.h>
int main()
{
	float arr[5] = {20.55,30.36,40.55,56.56,25.25};
	
	printf("\n  first element is %f and address is %p ", arr[0], &arr[0]);
	printf("\n  second element is %f and address is %p ", arr[1], &arr[1]);
	printf("\n  third element is %f and address is %p ", arr[2], &arr[2]);
	printf("\n  fourth element is %f and address is %p ", arr[3], &arr[3]);
	printf("\n  fifth element is %f and address is %p \n", arr[4], &arr[4]);
	
	
	return 0;
}
