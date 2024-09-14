//write a Program to concatenate two strings using pointer.
#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
    char str1[size],str2[size];
    char *ptr=str1;
    char *qtr=str2;
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    while(*(++ptr));
    while(*(ptr++)=*(qtr++));
    printf("%s",str1);

}
