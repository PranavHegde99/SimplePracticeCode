#include<stdio.h>
#include<stdlib.h>

void main()

{    int n,i,a[10],*ptr,Min;
    printf("how many element which u want to insert");
    scanf("%d",&n);
    printf("enter the element in Array: ");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
 

    }
    ptr=&a[0];
    Min=a[0];
    for(i=0;i<n;i++){
        if(*ptr<Min)
        Min=*ptr;
        ptr++;
    }
    printf("Thge smallest Element is %d",Min);
    
}