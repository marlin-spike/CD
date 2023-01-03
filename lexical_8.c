//WRITE C PROGRAM TO IMPLEMENT LEXICAL ANALYZER
#include <stdio.h>
#include<conio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char exp[20], id[10], op[10], c[10];
    int i = 0, j = 0, k = 0, m = 0, n;

    printf("Enter an expression: ");
    gets(exp);    /* in new couppiler fgets(exp, 20, stdin); */
    n = strlen(exp);

    for (i = 0; i < n; i++)
    {
        if (isalpha(exp[i]))
        {
            id[j] = exp[i];
            j++;
        }
        else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '=')
        {
            op[k] = exp[i];
            k++;
        }
        else if (isdigit(exp[i]))
        {
            c[m] = exp[i];
            m++;
        }
    }

    printf("\nIdentifier: ");
    for (i = 0; i < j; i++)
    {
        printf("%c ", id[i]);
    }
    
    printf("\nOperator: ");
    for (i = 0; i < k; i++)
    {
        printf("%c ", op[i]);
    }
    
    printf("\nConstant: ");
    for (i = 0; i < m; i++)
    {
        printf("%c ", c[i]);
    }


}
