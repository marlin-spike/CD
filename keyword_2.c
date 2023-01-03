// IMPLEMENT C PROGRAM TO IDENTIFY WHETHER A GIVEN word is keyword or not...

#include <stdio.h>
#include <string.h>
void main() {
  char keyword[32][10] = {
    "auto", "double", "int", "struct", "break", "else", "long",
    "switch", "case", "enum", "register", "typedef", "char",
    "extern", "return", "union", "const", "float", "short",
    "unsigned", "continue", "for", "signed", "void", "default",
    "goto", "sizeof", "voltile", "do", "if", "static", "while"
  };

  char str[25];
  printf("Enter a string: ");
  gets(str);  /*in updated coumpiler "gets" 
  		function throw error 
  		therfoe use "fgets(str, 25, stdin);" */

  int flag = 0, i;
  for (i = 0; i < 32; i++) {
    if (strcmp(str, keyword[i]) == 0) {
      flag = 1;
    }
  }

  if (flag == 1) {
    printf("%s is a keyword\n", str);
  } else {
    printf("%s is not a keyword\n", str);
  }
  getch();
  return 0;
}
