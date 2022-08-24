#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <math.h>

int main()
{
    float number;
    int x = 9, i = 0;
    // do perform the task first then check condition
    do {
        if (number == x){
                printf("You win");
                break;
        }
        printf("Guess the number: ");
        scanf("%f",&number);
        printf("your number %f\n",number);
        i++;

        if (i >= 3){
                printf("loss 3 chances");
                break;
        }
    }
    while(x==x);


}
