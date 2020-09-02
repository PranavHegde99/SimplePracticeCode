#include<stdio.h>

void main() {
  int a,b,temp;

  printf("eneter the element a & :");
  scanf("%d %d",&a,&b);
  printf(" the elemet of a And b is %d %d\n",a,b);
  temp= a;
  a =b;
  b = temp;
   printf(" the elemet  after Swap is a And b is %d %d\n",a,b);
 
    
}