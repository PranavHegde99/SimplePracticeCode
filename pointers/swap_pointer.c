#include<stdio.h>

void main() {
  
  int a,b;
  void exchange(int *,int *);
  printf("Enter the element of a:");
  scanf("%d",&a);
   printf("Enter the element of b:");
  scanf("%d",&b);
  printf(" the elemet of a And b is %d %d\n",a,b);
  exchange(&a,&b);
  printf(" the elemet After exchanged a And b is %d %d\n",a,b);
}
void exchange(int *m,int *n){
    int temp;
    temp =*m;
    *m = *n;
    *n = temp;
}