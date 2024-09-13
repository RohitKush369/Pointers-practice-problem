//Write a program to print the address and assigned value of a variable using Pointers.//
#include<stdio.h>
int main()
{
int num=10;
int *a=&num;
printf("Address of a is:%p\n",a);
printf("The value of a is:%d\n",*a);
return 0;
}
