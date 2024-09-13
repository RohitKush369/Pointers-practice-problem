//Write a program to declare an integer and a pointer to it.
// Change the value of the integer using the pointer and print the new value.
#include<stdio.h>
int main()
{
    int a=18;
    int *p=&a;
    *p=30;
    printf("The old value of a is:%d\n",a);
    printf("The new value of a is:%d\n",a);
}
