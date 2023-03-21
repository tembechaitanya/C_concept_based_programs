//simple addition program

#include<stdio.h>

int main()
{
	double Ans = 0.00;
	double a;
	double b;
	
	printf("Add 2 numbers for addition \n");
	scanf("%lf%lf",&a,&b);
	
	Ans = a + b;
	
	printf("Addition is %lf", Ans);
	
	return 0;
}
