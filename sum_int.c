#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <math.h>

int main()
{
    int num1,num2;
    FILE *pFiledata;
    pFiledata = fopen("sum.txt","r");

    fscanf(pFiledata,"%d",&num1);
    fscanf(pFiledata,"%d",&num2);
    printf("%d + %d = %d",num1,num2,num1+num2);


    pFiledata = fopen("sum.txt","w");
    fprintf(pFiledata,"%d",num1+num2);

    fclose(pFiledata);
    return 0;
}
