// IMPLEMENT C PROGRAM TO CHECK PRINT STRING IS CONSTANT OR not

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[30];
int i,n,flag=0;
printf("Enter a value :");
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++)
if(isdigit(str[i]))
flag=1;
else
{
flag=0;
break;
}

if(flag==1)
printf(" %s is constant value", str);
else
printf("\n %s is not constant", str);
}
