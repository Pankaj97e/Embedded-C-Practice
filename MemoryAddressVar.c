//Write a program to print the address of variables 

/* 
   int myData;
 - &myData : & ampersand sign gives you memory location address of myData variable.
 - %p : Format specifier to print a memory address (AKA a pointer)
 - %p : gives the address of the variable in hexadecimal format
*/


#include<stdio.h>

int main()
{
  char a1 = 'A';
  char a2 = 'p';
  char a3 = 'p';
  char a4 = ':';
  char a5 = 'l';
  char a6 = 'e';
  char a7 = '(';

  printf("Address of variable a1 = %p\n",&a1);
  printf("Address of variable a2 = %p\n",&a2);
  printf("Address of variable a3 = %p\n",&a3);
  printf("Address of variable a4 = %p\n",&a4);
  printf("Address of variable a5 = %p\n",&a5);
  printf("Address of variable a6 = %p\n",&a6);
  printf("Address of variable a7 = %p\n",&a7);
  return 0;
}