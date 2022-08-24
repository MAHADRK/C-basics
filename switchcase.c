#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <math.h>

int main()
{
    char letter;
    printf("type a English alphabet: ");
    scanf("%c",&letter);
    switch (letter)
    {
    case 'a':
            printf("This letter is vowel");
        break;
        case 'e':
            printf("This letter is vowel");
        break;
        case 'i':
            printf("This letter is vowel");
        break;
        case 'o':
            printf("This letter is vowel");
        break;
        case 'u':
            printf("This letter is vowel");
        break;
        default:
            printf("This letter is consonent");
    }

return 0;
}
