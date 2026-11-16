#include <stdio.h>

int a;
int main()
{
    a = 25;
    {
        int my_var;
        my_var = 45;

        printf("001 Value of the local variable 'my_var' is %d\n", my_var);
        printf("002 Value of the global variable 'a' is %d\n", a);
    }

    int my_var;
    my_var = my_var + 10; // Warning : 'my_var' is ised uninitialized in this function [-Wuninitialized]
    printf("003 Value od the local variable 'my_var' is : %d\n", my_var);
}