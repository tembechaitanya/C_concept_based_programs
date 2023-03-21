//extern form use case addition4.c

#include<stdio.h>

int main()
{
	int x;
	int y;
	
	int z = 0; 
	
	printf("\n pls put two integers for addititon : \n");
	scanf("%d%d", &x,&y);
	
	z = add(x,y);
	
	printf("\n Addition of two numbers is %d \n", z);
	
	return 0;
}
