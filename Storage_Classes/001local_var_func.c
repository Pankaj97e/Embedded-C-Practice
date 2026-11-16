#include<stdio.h>

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
    int count = 0;

    count = count +1;

    printf("This function executed %d time(s) \n",count);

}

//problem :
/* The value of count dies as the scope of myFun1() finishes*/

//Solution : 
/* Make it global variable*/