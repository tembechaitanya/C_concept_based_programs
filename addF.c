#include<stdio.h>

int add(int No1, int No2)
{
	int No3 = 0;
	No3 = No1 + No2;
	
	return No3;
	
}

int main()

{
	int iVal1 = 10;
	int iVal2 = 11;
	int iVal3 = 0;
	
	iVal3 = add(iVal1,iVal2);
	
	printf("value of addition 10 and 11 id %d ", iVal3);
	
	return 0;
	
}
