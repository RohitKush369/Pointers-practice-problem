// write a program to swap two numbers using pointers.
//As well as print the numbers before and after swaping//
#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x=10;
   int y=20;
    printf("Numbers before swaping:%d,%d\n",x,y);
    swap(&x,&y);
    printf("Numbers after swaping:%d,%d\n",x,y);
    return 0;
}
