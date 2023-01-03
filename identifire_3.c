//IMPLEMENT C PROGRAM TO IDENTIFY WHETHER A GIVEN STRING IDENTIFIER

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {
  char str[20];
  int flag = 0, n, i;

  printf("Enter a String: ");
  gets(str);
  n = strlen(str);

  if (isalpha(str[0])) 
  {

    for (i = 1; i < n; i++) {
      if (isalnum(str[i]) && str[i] != '_') {
        flag = 1;
        break;
      }
    }
  } else {
    flag = 0;
  }
  if (flag == 1) {
    printf("%s is a Valid Identifier\n", str);
  } else {
    printf("%s is an Invalid Identifier\n", str);
  }

  getch();
  return 0;
}
