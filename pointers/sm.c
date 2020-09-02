#include<stdio.h>

void main()
{
    int i,a[20],Min,n,temp;
    printf("how many element u wnat to insert");
    scanf("%d",&n);
printf("Enter the Element which youn want to insert");
for ( i = 0; i < n; i++)
{
   scanf("%d",&a[i]);
}
Min=a[0];
for ( i = 0; i < n; i++)
{
    if(a[i]<Min)
    {
        Min = a[i];
        a[i]++;
    }
    
    

}
printf("the smallest element is %d\n",Min);
}