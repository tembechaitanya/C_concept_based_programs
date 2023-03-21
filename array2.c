// array positions

#include<stdio.h>

int main()
{
	char crr[3] = {'a','b','c'};
	int arr[3] = {10,20,30};
	float frr[3] = {30.124, 56.235, 654.2022};
	double drr[3] = {2323.02124, 45782.123541, 5468.21350};
	
	printf("\n charcters are %c  %c  %c \n", crr[0], crr[1], crr[2]);
	
	printf("\n intergers are %d  %d  %d \n ", arr[0], arr[1], arr[2] );
	
	printf("\n floats are %f  %f  %f \n", frr[0], frr[1], frr[2]);
	
	printf("\n double are %Lf  %Lf  %Lf \n", drr[0], drr[1], drr[2]);
	
	
	
	return 0;
}
