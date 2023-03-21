// pointer  to pointer

#include<stdio.h>

int main()
{	
	
	char ch1 = 'a';
	char *ch2 = &ch1;
	char **ch3 = &ch2;
	char ***ch4 = &ch3;
	char ****ch5 = &ch4;
	
	char *ch6 = &ch1;
	char *ch7 = &ch1;
	
	printf("\n address of ch1 is %p ", &ch1);
	printf("\n address of ch6 is %p ", ch6);
	printf("\n address of ch7 is %p ", ch7);
	
	
	return 0;
}
