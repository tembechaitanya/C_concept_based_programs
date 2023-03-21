#include<stdio.h>
int main()
{
    int Arr[4] = {10,20,30,40};
    int *p = &Arr[0]; 
    int *q = &Arr[1]; 
    int *r = &Arr[2]; 
    int *s = &Arr[3]; 

    printf("\nArr[0] : %d \n", Arr[0]);
    printf("Arr[1] : %d \n", Arr[1]);
    printf("Arr[2] : %d \n", Arr[2]);
    printf("Arr[3] : %d \n", Arr[3]);

    printf("\n%d is address of Arr[0] \n", &Arr[0]);
    printf("%d is address of Arr[1] \n", &Arr[1]);
    printf("%d is address of Arr[2] \n", &Arr[2]);
    printf("%d is address of Arr[3] \n", &Arr[3]);

    printf("\n%d is value in pointer variable *p \n", p);
    printf("%d is value in pointer variable *q \n", q);
    printf("%d is value in pointer variable *r \n", r);
    printf("%d is value in pointer variable *s \n", s);

    return 0;
}