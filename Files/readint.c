#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp;
    int roll;
    char name[40];
     printf("enter the name");
     gets(name);
     fp = fopen("name","w");
     if(fp == NULL)
     {
         printf("error we cannot insert");
         return;
     }
printf("enterthe some roll Number:");
scanf("%d",&roll);
putw(roll,fp);
fclose (fp);
fp =fopen("name","r");
printf("The contents in the file %s",name);
printf("%d",roll);
fclose(fp);
\









}