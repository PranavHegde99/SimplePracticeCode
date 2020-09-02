#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char ch;
int i,n;
FILE *fp,*fp1;
fp=fopen("input.dat","r");
fp1=fopen("out.dat","w");
ch=getc(fp);
while(!feof(fp))
{
  putc(ch,fp1);
  ch=getc(fp);  
}
fclose(fp);
fclose(fp1);
printf("\n The File is copied\n");
fp1=fopen("out.dat","r");
printf("the copied file is ");
while ((ch=getc(fp1))!=EOF)
printf("%c",ch);

printf("\n");
fclose(fp1);

}
