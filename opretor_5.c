//write c program to check entered operator is valid or not


#include <stdio.h>
#include <string.h>
#include <conio.h>

void main() {
 char operators[30][3] = {"+","-","*","++","--","<",">","<=",">=","!=","&&","!","<<",">>"};

 
  char str[2];

  printf("Enter an operator: ");
  gets(str);

  int flag = 0, i;
  for (i = 0; i < 14; i++) {
    if (strcmp(str, operators[i]) == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 1) {
    printf("%s is a valid operator\n", str);
  } else {
    printf("%s is an invalid operator\n", str);
  }
 
  getch();

}
