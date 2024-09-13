//write a program to multiply two numbers using pointers.
#include<stdio.h>
int main()
{
    int num1,num2;
    int result;
    int *a,*b;
    a=&num1;
    b=&num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);

result=(*a)*(*b);
printf("%Result is:%d",result);
return 0;
}
