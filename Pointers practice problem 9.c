// Reverse the elements of an array using pointers
#include<stdio.h>
#define N 5
int main()
{
    int a[N],*p;
    printf("Enter the elements of array:\n");
    for(p=a;p<=a+N-1;p++){
        scanf("%d",p);
    }
    printf("Reverse of the elements:\n");
    for(p=a+N-1;p>=a;p--){
        printf("%d\n",*p);
    }
}
