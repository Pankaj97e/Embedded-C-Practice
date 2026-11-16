// Variable Scope

/*Variable may only be availabe within a specific function -> Local scope (Local Variables)
   or it may be available to the entire C program -> Global scope (Global variables) */

// Local Variable
/*
  Local Variable exist(memory claimed) for the time the function is executed.
  Once the function exits, local variables die.(memory reclaimed)
  So, local variables come and go during the run time of the function execution of a program
  They don't sit permanently on the data memory
*/

// Uncomment this below program and run

// Program 1
/*
#include<stdio.h>
//this is a function prototype of function myFun1
void myFun1(void);

int main()
{
    int myScore;  //Local variable
    myScore = 900;

    printf("Value of the variable myScore = %d\n",myScore);

    //this is a function call
    myFun1();
    return 0;
}


//this is a function definition
void myFun1(void)
{
  myScore = 800; //CTE : error: 'myScore' undeclared
  printf("002Value of the variable myscore = %d\n",myScore);
}

*/

// Global Variable

/* If you make the variable as global, it will occupy the data memory
    permanently i.e., throughout the life span of the program

 - You can access global variables from another file of the project

 - All uninitialized global variables will have 0 as default value

 - Life : Till the execution of the program

*/

// Program 2
/*
#include<stdio.h>
//this is a function prototype of function myFun1
void myFun1(void);

int myScore;  //Global variable

int main()
{

    myScore = 900;

    printf("Value of the variable myScore = %d\n",myScore);

    //this is a function call
    myFun1();
    return 0;
}



//this is a function definition
void myFun1(void)
{
  myScore = 800;
  printf("002Value of the variable myscore = %d\n",myScore);
}

*/

// Program 3

/*
#include<stdio.h>

int valueA = 4;

int main()
{
    int valueA = 67;
    //char valueA = 0; //illegal , cannot define 2 variables with same name

    printf("value A = %d\n",valueA);

}

//O/P = 67 ?
// Bcs when variable names are same b/w local space and global space the first preference always given to the local space

*/

// Program 4
//  What could be the output?
#include <stdio.h>

int valueA = 4;

int main()
{
    {
        int valueA = 67; // this is now local variable bound to scope of these curly braces,
    } // the moment scope goes out the control of this local A die

    printf("value A = %d\n", valueA); // Global variabe will act here

    return 0;
}

// o/p => value A = 4

// Note :
/*
When the execution control goes out of the scope of a local variable, the local variable dies that means
a variable loses its existence
*/