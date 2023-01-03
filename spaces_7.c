//IMPLEMENT TO COUNT WHILE SPACES, TABS , SPACES NEW LINE IN A TEXT
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[100];
int i,n,space=0,tab=0,new_line=0;
printf("Entre a string: ");
gets(str);
n= strlen(str);
for(i=0;i<n;i++)
{
if(str[i]==' ')
space++;
if(str[i]=='\t')
tab++;
if(str[i]=='\n')
new_line++;
}
printf("\n the no of spaces = %d",space);
printf("\n the no of tabs = %d",tab);
printf("\n the no of new_lines = %d",new_line);
getch();
}
