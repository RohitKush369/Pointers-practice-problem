// Write a program where a function changes the value of a variable
//in the calling function using a pointer.
#include<stdio.h>
void change(int*);
int main()
{
    int a=10;
    change(&a);// call by refence
    printf("%d",a);
    return 0;
}
void change(int *p){
*p=20;
}
