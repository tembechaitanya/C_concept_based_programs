#include<stdio.h>

int No1 = 11;
static int No2 = 21;


/* gcc firststatic.c secondstatic.c -o myexe
    will get error because static have global scope
    but it cannot access from outside
*/