// Description
/*
A 'C' project can be a collection of multiple source files and a 'static'
storage class specifier can be used to manage the visibility of the variables
across varios files effectively.
*/

// Note
/*
We can restrict the variable from accessing or modifying by any third person
using 'static' keyword.
*/

#include <stdio.h>

// function prototype
void file1_myFun1(void);

/*
If we don't want the variable to be modified by any other file we'll make
it static
*/
static int mainPrivateData; // variable definition

int main()
{
    mainPrivateData = 100;

    printf("mainPrivateData = %d\n", mainPrivateData);

    file1_myFun1();

    printf("mainPrivateData = %d\n", mainPrivateData);
    return 0;
}

// CTE(Compile Time Error) : undefined reference to `mainPrivateData'

//important note:
/*
'static' variable can't be 'extern'
So if you want to compile it successfully we have to remove extern from file 1
and remove 'mainPrivateData' variable as well.
*/

// Note
/*
In VS code compiler both files together
e.g : gcc .\main.c .\file1.c -o mystaticexternprogram
      .\mystaticexternprogram.exe
*/