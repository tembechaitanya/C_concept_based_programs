// array representation

#include<stdio.h>

int main()
{
	int a = 5;
	int *ptr = &a;
	int **ptr1 = &*ptr;
	
	printf("\n value of variable a is %d ", a);
	printf("\n address of that variable a is %d ", *ptr);
	printf("\n address of pointer ptr variable which holds value of a variable is %d ", **ptr1);
	
	return 0;
}
