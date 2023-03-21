

#include<stdio.h>

int main()
{
	char c = 'A';
	char *p = &c;
	
	printf("\n value i character is %c : \n", c);	//A
	printf(" value of pointer is %d \n", p); 	//100
	printf(" value of pointer is %d \n", &p);	//200
	printf(" value inside the pointer p is %c ", *p); 	//A
	
	
	
	return 0;
}
