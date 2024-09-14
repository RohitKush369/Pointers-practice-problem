//write a program to  copy one string to another string using pointers;
#include<stdio.h>
#define size 50
int main()
{
    char str1[size],str2[size];
    char *ptr=str1;
    char *qtr=str2;
    printf("Enter the string:");
    gets(str1);
while(*(qtr++)=*(ptr++));//copying first sting to second string
printf("first string is:%s\n",str1);
printf("second string is:%s\n",str2);
}
