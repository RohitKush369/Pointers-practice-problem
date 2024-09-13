// Write a program to declare an array of 5 integers.
// Use pointer arithmetic to iterate through the array and print all elements.

#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int *ptr=arr;
for(int i=0;i<5;i++){
printf("%d\n",*ptr);
ptr++;
}
}

//OR
#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int *ptr=arr;
printf("First element is:%d\n",*ptr);
printf("Second element is:%d\n",*ptr+1);
printf("Third element is:%d\n",*ptr+2);
printf("Fourth element is:%d\n",*ptr+3);
printf("Fifth element is:%d\n",*ptr+4);
return 0;
}
