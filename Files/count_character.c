#include<stdio.h>
#include<stdlib.h>

void main() {
   FILE *fp;
   char c;
   int count =0;
   printf("enter Inputting Data");
   fp=fopen("input.dat","w");
   while ((c=getchar())!=EOF)
   putc(c,fp);
   fclose(fp);
   printf("Outputting the data is");
   fp = fopen("input.dat","r");
   while ((c=getc(fp))!=EOF)
 {
     printf("%c",c);
     count++;
 }
 printf("Total number of character isn %d",count);
   
fclose(fp);
}