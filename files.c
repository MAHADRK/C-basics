#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <math.h>

int main()
{
    // pFiledata is a file pointer and its is pointing towards the file
    // w write, r read and a append/add new data to file
    FILE *pFiledata;
    /*

    // to write the names of guests
     pFiledata = fopen("list of guests.txt","w");

    fprintf(pFiledata,"Mahad Raza\nSarim\nSohaib\nNajam\nMohsin\nRaza");

    */

    //to read the data from file
    char data,ch;
    int a = 1;
    pFiledata = fopen("list of guests.txt","r");

    // you can loop it to extract all data
    // when file consist of character only
    ch = fgetc(pFiledata);
    while(ch != EOF)
    {
        //to write the data on to console
        printf("%c",ch);
        // fscanf for anytype of data from file
        //fscanf(pFiledata,"%c",&data);
        ch = fgetc(pFiledata);
    }
    fclose(pFiledata);
}
