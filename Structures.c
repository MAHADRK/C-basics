#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <math.h>

//defining the structure
struct Employ{
        // elements
        char Name[20];
        char Dept[10];
        char Desig[10];
        int  salary;
};

int main()
{
    // making structure container Emply1
    struct Employ Employ1;

    // defining attributes
    // strcpy use to save string to variable
    strcpy(Employ1.Name,"Mahad Raza Khan");
    strcpy(Employ1.Desig,"Developer");
    strcpy(Employ1.Dept,"IT");
    Employ1.salary = 5;

    //printing structure attributes
    printf("Name: %s\nDepartment :%s\nDesignation: %s\nSalaray: %d",Employ1.Name,Employ1.Dept,Employ1.Desig,Employ1.salary);



    return 0;
}
