// data types in c
#include<stdio.h>
  
//user defined datatype : structure
struct Demo
{
    int StructI;
    float StructF;
    double StructD;
    char StructCh;
};

//user defined datatype : union
union Hello
{
    int UnionI;
    float UnionF;
    double UnionD;
    char UnionCh;
};

//user defined datatype : enum
enum week {sun, mon, tue, wen, thus, fri, sat};


//User defined datatype : function
void Datatype()
{
    printf("\nThis is void datatype function in C which calls here!!\n");
}

int main()
{ 
    //premitive datatype : int, float, double, char, void
    int No1 = 10, No2 = 20;                     
    float No3 = 10.20f, No4 = 30.40f;
    double No5 = 50.60, No6 = 70.80;
    char Ch = 'Z';

    //derive datatype : Array, pointer, function
    int Arr[4] = {10,20,30,40};
    float frr[4] = {10.10f, 20.20f, 30.30f, 40.40f};
    double drr[4] = {10.20, 20.30, 30.40, 40.50};
    char crr[4] = {'a','b','c','d'};

    int *iptr = &No1;
    float *fptr = &No3;
    double *dptr = &No5;
    char *cptr = &Ch;

    printf("\npremitive datatype : \n");
    printf("%d + %d = %d \n",No1, No2, No1+No2);
    printf("%f + %f = %f \n",No3, No4, No3+No4);
    printf("%lf + %lf = %lf \n",No5, No6, No5+No6);
    printf("%c\n", Ch);

    printf("\nDerived datatype: Array \n");
    printf("%d      %d       %d      %d      \n", Arr[0], Arr[1], Arr[2], Arr[3]);
    printf("%f      %f      %f      %f      \n", frr[0], frr[1], frr[2], frr[3]);
    printf("%lf      %lf      %lf      %lf      \n", drr[0], drr[1], drr[2], drr[3]);

    printf("\nDerived datatype: pointer\n");
    printf("pointer iptr holds address of variable No1 %ld : %d \n", iptr, *iptr);
    printf("pointer fptr holds address of variable No3 %ld : %f \n", iptr, *fptr);
    printf("pointer dptr holds address of variable No5 %ld : %lf \n", iptr, *dptr);
    printf("pointer cptr holds address of variable Ch %ld : %c \n", iptr, *cptr);


    Datatype();

    printf("\nstruct initialization\n");
    struct Demo dobj;
    dobj.StructI = 100;
    dobj.StructF = 200.200f;
    dobj.StructD = 300.300;
    dobj.StructCh = 'A';
    printf("value of StructI : %d \n", dobj.StructI);
    printf("value of StructF : %f \n", dobj.StructF);
    printf("value of StructD : %lf \n", dobj.StructD);
    printf("value of StructCh : %c \n", dobj.StructCh);

    printf("\nunion initialization\n");
    union Hello uobj;
    uobj.UnionI = 500;
    uobj.UnionF = 600.60f;
    uobj.UnionD  = 700.777;
    uobj.UnionCh = 'K';
    

    printf("value of UnionI : %d \n",uobj.UnionI);
    printf("value of UnionF : %f \n",uobj.UnionF);
    printf("value of UnionD : %lf \n",uobj.UnionD);
    printf("value of UnionCh : %c \n",uobj.UnionCh);


    printf("\nenum initailasation\n");
    enum week today;
    today = sun;
    printf("sunday %d\n",sun);
    printf("monday %d\n",mon);
    printf("tuesday %d\n",tue);
    printf("wensday %d\n",wen);
    printf("thrusday %d\n",thus);
    printf("friday %d\n",fri);
    printf("saturday %d\n",sat);


 
    return 0;
}

