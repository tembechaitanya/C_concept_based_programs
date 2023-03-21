//addition program which takes nos from user

#include<stdio.h>

int Addition(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
	
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("Enter 2 nos for addition \n");
	scanf("%d%d",&a, &b);
	
	c = Addition(a,b);
	
	printf("Addition is %d \n",c);
	
	return 0;
}
