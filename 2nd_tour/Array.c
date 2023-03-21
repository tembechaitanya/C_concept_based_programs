#include<stdio.h>

int main()
{
    int Marks[4];
    Marks[0] = 10;
    Marks[1] = 8;
    Marks[2] = 7;
    Marks[3] = 9;

    int MARKS [4] = {10,20,30,40};

    int Hello [4][2] = {{10,20},{30,40},{50,60}};
    char cHello [3][2] = {{'A','B'},{'C','D'},{'E','F'}};

    float fHello[3][2];

    printf("%c \n", cHello[0][1]);
    printf("%c \n", cHello[2][1]);
    printf("%c \n", cHello[1][1]);

    printf("%d \n", Hello[0][1]);
    printf("%d \n", Hello[2][1]);
    printf("%d \n", Hello[1][1]);

    printf("size of fHello is %d bytes \n", sizeof(fHello));
    //printf("size of fHello is %d bytes \n", sizeof(Hello));

    printf("size of fHello is %d bytes \n", sizeof(Hello));

    printf("Address of one of Hello variales %d \n", &Hello[0][0]);
    printf("Address of one of Hello variales %d \n", &Hello[0][1]);
    printf("Address of one of Hello variales %d \n", &Hello[1][0]);
    printf("Address of one of Hello variales %d \n", &Hello[1][1]);
    printf("Address of one of Hello variales %d \n", &Hello[2][0]);
    printf("Address of one of Hello variales %d \n", &Hello[2][1]);


    return 0;
}