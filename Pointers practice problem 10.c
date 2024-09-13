//Reverse the string using pointer
#include<stdio.h>
#define N 11
int main()
{
    char a[N],*p;
    printf("Enter the string:");
    for(p=a;p<a+N-1;p++){
        scanf("%C",p);
    }
    *p='\0';
    printf("Reverse of the string:");
    for(p=a+N-2;p>=a;p--){   //The last character will be null character
        printf("%C",*p);
    }
}
