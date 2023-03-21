//increment operator operations


#include<stdio.h>

int main()
{
	
	char ch = '+';
	int i = 10;
	float f = 5656.5555;
	double d = 2323.2323;
	int arr[5] = {10,20,30,40,50};
	
	
	
	
	ch++;
	i++;
	f++;
	d++;
	arr[0]++; arr[1]++; arr[2]++; arr[3]++; arr[4]++;
	
	printf("\n Incremented value is %c ", ch);
	printf("\n Incremented value is %d ", i);
	printf("\n Incremented value is %f ", f);
	printf("\n Incremented value is %lf ", d);
	printf("\n Incremented value are %d %d %d %d %d  ", arr[0],arr[1],arr[2],arr[3],arr[4]);
				
	
	return 0;
}
