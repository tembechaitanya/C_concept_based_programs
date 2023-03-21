//Addition

#include<stdio.h>

int Add(int No1, int No2)
{
	int ret = 0;
	
	ret = No1 + No2;
	
	return ret;
	
	
}

int main()
{
	int Ans = 0;

	
//	printf("Add 2 intergers for addition \n");
//	scanf("%d%d",&a,&b);
	
	Ans = Add(20,10);
	
	printf("Addition is %d \n", Ans);
	
	return 0;
}
