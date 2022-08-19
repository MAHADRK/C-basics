#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <math.h>

double cal(float num1, float num2,char opt)
{
    double result;
    if (opt == '*')
    {
    printf("your Entered %c\n",opt);
    result = num1*num2;
    }
    else if (opt == '+')
    {
        result = num1 + num2;
    }
    else if (opt == '-')
        {
     result = num1 - num2;
    }
    else
    {
    result = num1 / num2;
    }
    return result;
}



int main()

{
    float num1,num2;
    char opt;
    printf("Enter your option +, -, /, * :  ");
    scanf("%c",&opt);
    printf("Enter two numbers to (press enter after every input): ");
    scanf("%f %f",&num1,&num2);
    printf("Answer is %lf",cal(num1,num2,opt));
    return 0;
}
