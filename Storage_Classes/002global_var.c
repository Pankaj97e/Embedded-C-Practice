#include <stdio.h>

int count = 0; // global variable

/*This ia a function prototype*/
void myFun1(void);

int main()
{
    /*Calling of the function couple of times*/
    myFun1();
    myFun1();
    myFun1();
    myFun1();
    return 0;
}

/*This function counts that how many times myFun1() calls*/
/*This is a function definition*/
void myFun1(void)
{

    count = count + 1;

    printf("This function executed %d time(s) \n", count);
}

// Problem

/* Now you made this varibale 'count' public
   now this variable can be modified by any function in the program
   that is not good
*/

// Requirement
/*
We want a global variable that is private to a function.
we want a private variable that does not lose its existence even if the execution control
goes out of the scope of the variable.
*/

// Solution
/*
 This can be achieved in C by using storage class specifier called 'static'
  */