#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <math.h>

float greater_num(float num1,float num2,float num3)
{
    // find weather num1 is greater for both given numbers
    if (num1>= num2 && num1>=num3)
    {
    return num1;
    }
    else if (num2>=num3 && num2>=num3)
    {
        return num2;
    }
    else
        {

     return num3;
    }
}



int main()

{
    printf("Enter three numbers to find which is greater(press enter after every input)");
    //making numbers as float to as there is no condition of integer number
    float num1,num2,num3;
    scanf("%f %f %f",&num1,&num2,&num3);
    printf("The greater number is %f",greater_num(num1,num2,num3));
    return 0;
}
