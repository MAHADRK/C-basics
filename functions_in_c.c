#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
//defining the function return is mendatory
double division(int num1,float num2)
{
    //direct return devision
    return num1/num2;
}

int main()

{
int num1;

//we need to change the denominator to float cause in c there is int/int = int but int/float = float
float num2;

printf("writing a function: ");
scanf("%d %f",&num1,&num2);
//calling the function with same data type
printf("sqrt of %d / %f : %lf",num1,num2,division(num1,num2));

return 0;
}
