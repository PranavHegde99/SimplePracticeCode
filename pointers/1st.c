#include<stdio.h>


void main(){
    int *ptr;
    int a,b;

    a=10;
    b=20;
    printf("pointer declaration:\n");
    printf("values of a And b are %d %d\n",a,b);
    ptr=&a;
    b=*ptr;
    printf("the value adress of a is %p\n",ptr);
    printf("the values of b is %d\n",b);
    




}