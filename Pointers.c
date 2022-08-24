#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <math.h>

int main()
{
    /*
    variable names are the description physical location where data stored and we can also call it with memory address
    in simple these memory address called POINTERS
    */
    int var = 18;
    //this a pointer variable
    int * pvar = &var;
    printf("this is the memory address of variable var:%p and pointer variable: %p\n",&var,pvar);

    //dereferencing of pointers
    int num = 4;
    int *pnum = &num;
    printf("dereferenced pointer num: %d\n or\n %d",*pnum,*&num);

    return 0;
}
