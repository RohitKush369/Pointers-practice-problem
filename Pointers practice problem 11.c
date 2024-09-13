//Write a program that calculates the sum of elements in an array using a pointer.
#include<stdio.h>
#define N 10
int main()
{
    int a[N];
    int *p;
    int sum=0;
    printf("Enter the elements:\n");
    for(p=a;p<a+N;p++){
        scanf("%d",p);
    }
    printf("Sum of elements is:");
    for(p=a;p<a+N;p++){
        sum=sum+*p;
    }
    printf("%d",sum);
}
