#include<stdio.h>

int add(int a, int b)
{
	int c=0;
	c=a+b;
	return c;
	
}


int main()
{
	int x=10;
	int y=11;
	int z=0;
	
	z=add(x,y);
	
	printf("Adition of 10+11 is %d ", z);
	
	
	return 0;
}
