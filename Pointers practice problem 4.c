//Write a program to modify an array of 5 integers using pointers.
//Increment each value by 5 using pointer dereferencing.
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
printf("After increment: ");
for(int i=0;i<5;i++){
    printf("%d ",*ptr+5);
    ptr++;
}
}
