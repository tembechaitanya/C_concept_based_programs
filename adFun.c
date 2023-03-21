#include<stdio.h>
 main()
{
	//int z=0;
	//z=x+y;
	
	 add();
	
}


void add() 

{	
	int a,b;
	auto int c=0;
	
	printf("Add any two numbers : ");
	scanf("%d%d",&a,&b);
	
	c=a+b;
	
	printf("Addtion of two numbers is %d ", c);
	
	return c;
	
}
