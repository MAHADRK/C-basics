
/*
This whole script to make an understanding about the syntax of C
We are learning about:
data types
how to print them
comments
*/
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <math.h>
int main()

{
//simple print statement
printf("Aslam u alikum world! \n");



//                       ******************DATA TYPES******************************


//integers, character , float is a decimal data type with 4 bit ,double is a float data type with 8 bit.

int a = 5;
//to print integer use %d
printf("This is an integer %d \n",a);

//define character with single commas
char b = 'A';
//for character we use %c as format specifier
printf("character is: %c \n", b);

//always put decimal at the end of the float or double
double c = 22/7.0;

//the precision after the decimal is pretty accurate
printf("double = %.15lf \n",c);

float d = 22/7.0;
//the precision after the number is not accurate
printf("float = %.15f \n",d);

char sentence[] = "This is my first C program";
//we use array to store a string and format specifier will be %s
printf("%s \n",sentence);

//some maths functions we can use in c
printf("square root of 25: %f and the square of 2 is %f \n",sqrt(25),pow(2,2));

//TO make variables constant just write const before data type
const int const_num = 5;
printf("This is constant integer = %d, you can't change this value by reinitializing \n", const_num);

//for user inputs

int number; char letter;
double value_of_pi;
float CGPA;
char Name[22];

printf("Enter Your Name, a number, Character, value of pi, CGPA(press Enter after every input): ");

//for strings this scanf detects until first space then it will leave the remaining text so use fgets
fgets(Name,22,stdin);

//don't forget to use & before variable in scanf
scanf("%d %c %f %lf",&number,&letter,&CGPA,&value_of_pi);

printf("Your Name:%sNumber:%d Letter:%c CGPA:%f Value of pi:%lf ",Name,number,letter,CGPA,value_of_pi);


return 0;




}

