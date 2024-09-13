//Write a program that demonstrates the use of a pointer to a pointer.

#include<stdio.h>
int  main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("Value of a is:%d\n",a);
    printf("Address of a is:%p\n",&a);
    printf("value stored in pointer p is:%d\n",*p);
    printf("value stored in pointer q is:%d\n",**q);
    printf("value stored in pointer r is:%d\n",***r);
    printf("Address pointed by the pointer p is:%p\n",(void*)p);
    printf("Address pointed by the pointer q is:%p\n",(void*)*q);// for matching the formate spacifier
    printf("Address pointed by the pointer r is:%p\n",(void*)**r);
    return 0;
}

