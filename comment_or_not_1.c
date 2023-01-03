// practical no 1
//Implement C Program to Identify whether a given line is comment or not


#include<stdio.h>
#include<conio.h>

void main() {
  char a[50];
  int i;

  clrscr();
  printf("Enter a string: ");
  gets(a);

  if (a[0] == '/') {
    if (a[1] == '/') {
      printf("It is a Single Line comment.\n");
    } else if (a[1] == '*') {
      for (i = 2; i < 50; i++) {
        if (a[i] == '*' && a[i + 1] == '/') {
          printf("It is a Double Line Comment.\n");
          break;
        }
      }
    }
  } else {
    printf("It is not a comment.\n");
  }

  getch();

}

