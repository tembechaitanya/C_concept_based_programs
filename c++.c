#include<stdio.h>

int main()
{
	int  i = 10;
	int *p = &i;
	
	p++;

//	printf("\n ***** simple integer and pointer *****\n");
//	printf("\n %d \n",i);
//	printf("\n %d \n",p);

	printf("\n %d \n",i);
	printf("\n %d \n",p);

	return 0;
}
