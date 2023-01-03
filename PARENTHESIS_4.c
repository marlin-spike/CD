// IMPLEMENT C PROGRAM TO CHECK PARENTHESIS IS BALANCED OR NOT

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main ()
{
  char expr[30];
  int n, i, count = 0;
  printf ("\n \n Enter a expression:- ");
  gets (expr);
  n = strlen (expr);
  for (i = 0; i < n; i++)
    {
      if (expr[i] == '(')
	count++;
      if (expr[i] == ')')
	count--;
      if (count == -1)
	break;
    }
  if (count == 0)
    {
      printf ("\n \n PARENTHESIS is Balanced");
    }
  else
    {
      printf ("\n \n PARENTHESIS is Not Balance");
    }
}

