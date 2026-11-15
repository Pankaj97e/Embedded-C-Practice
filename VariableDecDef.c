// Variable decration vs Definition
#include <stdio.h>

// compiler will give error : undefined reference to `myExamScore' ?
//  Bcs when compiler sees this it will not allocate any storage for this variable
//  'extern' keyword tells compiler that, this variable is defined outside the scope of this file.

extern int myExamScore; // Variable Declaration

int main()
{

    myExamScore = 540; // So for compiler this variable is not defined

    // compiler says that undefined reference to this variable, means compiler couldn't be able to find the reference

    printf("Hello World\n");

    return 0;
}