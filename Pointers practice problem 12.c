// Write a program to add two numbers using pointers.
#include<stdio.h>
int  add(int*,int*);
int main()
{
  int sum;
    int x=12;
    int y=18;
    sum=add(&x,&y);
    printf("the sum is:%d",sum);
    return 0;
}
  int add(int*a,int*b){
  return *a+*b;//returning sum

}
