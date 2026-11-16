// Description
/*
A 'C' project can be a collection of multiple source files and a 'static'
storage class specifier can be used to manage the visibility of the variables
across varios files effectively.
*/

#include <stdio.h>

// function prototype
void file1_myFun1(void);

int mainPrivateData; // variable definition

int main()
{
    mainPrivateData = 100;

    printf("mainPrivateData = %d\n", mainPrivateData);

    file1_myFun1();

    printf("mainPrivateData = %d\n", mainPrivateData);
    return 0;
}

/*
//Problem
Since declaration is not there file1.c for variable
 'mainPrivateData' the compiler will give error that it is undeclared
 variable.

 //Solution
 'extern' keyword : extern int mainPrivateData
 So compiler will know now this is external varibale
 somewhere else in the project.
 */

// Note
/*
In VS code compiler both files together
e.g : gcc .\main.c .\file1.c -o mystaticexternprogram
      .\mystaticexternprogram.exe
*/