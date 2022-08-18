#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <math.h>
int main()

{

double num1;
double num2;
printf("Enter numbers to add(press enter after input):");
scanf("%lf",&num1);
scanf("%lf",&num2);
//note doubles takes 8bit of memory
printf("sum of given numbers %lf + %lf = %lf ",num1,num2,num1+num2);
return 0;
}
