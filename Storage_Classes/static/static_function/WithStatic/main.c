#include<stdio.h>

//Function Prototype
void file1_myFun1(void);

static int mainPrivateData;

int main()
{
    mainPrivateData = 100;

    printf("mainPrivateData = %d\n",mainPrivateData);

    file1_myFun1();

    printf("mainPrivateData = %d\n",mainPrivateData);

    return 0;
}

/*
Let's say this function in main.c is very critical and important 
And this should not be called by any other file 
only main.c should call the function

- So we use 'static' keyword
*/

static void change_system_clock(int system_clock)
{
    printf("System clock changed to = %d\n",system_clock);
}