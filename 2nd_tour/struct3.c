//array in structure

#include<stdio.h>

struct PPA
{
    int Arr[3];
    float frr[3];
};

int main()
{
    struct PPA pobj;

    pobj.Arr[0] = 10;
    pobj.Arr[1] = 20;
    pobj.Arr[2] = 30;

    pobj.frr[0] = 11.11f;
    pobj.frr[1] = 12.12f;

    printf("\n%d \n",pobj.Arr[0]);
    printf("\n%d \n",pobj.Arr[1]);
    printf("\n%d \n",pobj.Arr[2]);     

    printf("\n%f \n",pobj.frr[0]);  
    printf("\n%f \n",pobj.frr[1]);     


    return 0;
}