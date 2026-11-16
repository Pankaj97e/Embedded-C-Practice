#include <stdio.h>

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
    static int count = 0;

    count = count + 1;

    printf("This function executed %d time(s) \n", count);
}

// Note:
/*
Here 'count' is  a global variable but it is private to the myFun1().
*/

// But (Problem)
/*
In this case this 'count' variable is accessible only from myFunc1() not from other
functions and the varibale will not die even if the execution control
goes out of this function.
*/

/*
'count' : scope => global
          visibility => only inside function
*/