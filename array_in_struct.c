//array in structure

#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int arr[3];
    char crr[3];
};

int main()
{
    struct Demo dobj;

    dobj.arr[0] = 10;
    dobj.arr[1] = 20;
    dobj.arr[2] = 30;

    dobj.crr[0] = 'A';
    dobj.crr[1] = 'B';
    dobj.crr[2] = 'C';

    printf("size of dobj is %d bytes \n", sizeof(dobj));
    
    return 0;
}