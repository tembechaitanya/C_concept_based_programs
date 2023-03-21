#include<stdio.h>
int main()
{
    int arr[4] = {10,20,30,40};
    int brr[4] = {5,5,5,5};
    int crr[4] = {};

    // crr[0] = arr[0] + brr[0];
    // crr[1] = arr[1] + brr[1];
    // crr[2] = arr[2] + brr[2];
    // crr[3] = arr[3] + brr[3];

    for(int i = 0; i<4; i++)
    {
        crr[i] = arr[i] + brr[i];
    }

    printf("\n elements of crr is: \n %d \n %d \n %d \n %d \n", crr[0],crr[1],crr[2],crr[3]);


    return 0;
}