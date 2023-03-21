#include<stdio.h>
//#pragma pack(1)

struct Demo
{
    int i1;
    float f1;
    double d1;
    char c1;
    int arr[5];
    int *sptr;
};

struct Hello
{
    
};

void display()
{
    printf("\nAai Bolavtey.. Ghari ja..Ghari ja..!\n\n");
}

int main()
{

    int i = 10;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    int arr[4] = {};
    int brr[] = {10,20,30,40,50};

    struct Demo dobj;
    struct Hello hobj;
       

    printf("\nsize of integer is %d bytes \n", sizeof(int));
    printf("size of float is %d bytes \n", sizeof(float));
    printf("size of double is %d bytes \n", sizeof(double));
    printf("size of char is %d byte \n", sizeof(char));
    printf("size of pointer is %d bytes \n", sizeof(ptr1));
    printf("size of pointer is %d bytes \n", sizeof(ptr2));
    printf("size of array is %d bytes\n",sizeof(arr));
    printf("size of array is %d bytes\n",sizeof(brr));
    printf("size of struct Demo object is %d bytes\n",sizeof(dobj));
    printf("size of struct Hello object is %d bytes\n",sizeof(hobj));

    printf("value stored in ptr1 is %d \n",*ptr1);
    printf("Address of variable i is %ld \n",&i);
    printf("Address stored by ptr1 is %ld \n",ptr1);
    
    return 0;
}