#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
int main()

{
//this is a mad-game where we put some words to generate a funny story
printf("write words to complete the story \n");
char pastverb1[20];
char pastverb2[20];
char feeling[20];
char verbing1[20];
char verbing2[20];
char adjective[20];
int i;


printf("a past verb ");
scanf("%s",&pastverb1);
printf("a past verb ");
scanf("%s",&pastverb2);
printf("some feeling towards someone ");
scanf("%s",&feeling);
printf("verb with ing ");
scanf("%s",&verbing1);
printf("verb with ing ");
scanf("%s",&verbing2);
printf("adjective ");
scanf("%s",&adjective);

printf("\nI secretly %s about you today,\nWishing you like me in the same way.\n",pastverb1);
printf("I'm %s and wanting for some boy to care, \nI look all around me and one one is there.\n",verbing1);
printf("I %s and I prayed for you to be with me,\nBut it didn't turn out the way I thought it would be.",pastverb2);
printf("I know I should have stopped %s you,\nBut I can't hide these feelings so %s and true\nI've never had a relationship with anyone,",verbing2,adjective);
printf("But someday I will,\nHow can I forget what was done,\nFor now I %s you still.",feeling);


//writing the above in an array form to minimize the code
#define NUMBER_OF_STRING 5
#define MAX_STRING_SIZE 40
#define NOS 5
#define MSS 12
char statements[NUMBER_OF_STRING][MAX_STRING_SIZE] = {"a past verb","a past verb","some feeling towards someone","verb with ing","verb with ing","adjective"};
char user_input[NOS][MSS] = {"&pastverb1","&pastverb2" , "&feeling", "&verbing1", "&verbing2", "&adjective"};

for (i=0;i<=6;i++)
{
    printf("%s: ",statements[i]);
    scanf("%s",user_input[i]);
}

printf("\nI secretly %s about you today,\nWishing you like me in the same way.\n",pastverb1);
printf("I'm %s and wanting for some boy to care, \nI look all around me and one one is there.\n",verbing1);
printf("I %s and I prayed for you to be with me,\nBut it didn't turn out the way I thought it would be.",pastverb2);
printf("I know I should have stopped %s you,\nBut I can't hide these feelings so %s and true\nI've never had a relationship with anyone,",verbing2,adjective);
printf("But someday I will,\nHow can I forget what was done,\nFor now I %s you still.",feeling);


return 0;
}
