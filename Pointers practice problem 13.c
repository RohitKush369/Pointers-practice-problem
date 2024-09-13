//Write a program to find the Biggest number between two numbers using a pointer.
#include<stdio.h>
int main()
{
    int num1,num2,*a,*b;
    a=&num1;
    b=&num2;
    printf("Enter first number:");
    scanf("%d",a);
    printf("Enter second number:");
    scanf("%d",b);
    if(*a>*b){
        printf("first number is biggest number");
    }
    else {
        printf("second number is biggest number");
    }
    return 0;
}
