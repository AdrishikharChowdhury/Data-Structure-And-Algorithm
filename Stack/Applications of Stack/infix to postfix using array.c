#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char *intopost(char *, int);
char *push(char *, char, int *, int);
char pop(char *, int *);
int precedence(char);
int isOperator(char);
int main() 
{
    char *postfix, *infix;
    int n;
    printf("Enter the no. of terms: ");
    scanf("%d", &n);
    infix = (char *)malloc((n + 2) * sizeof(char));
    postfix = (char *)malloc((n + 1) * sizeof(char));
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    infix[n] = ')';
    infix[n+1] = '\0';
    postfix = intopost(infix, n);
    printf("The postfix expression is: %s\n", postfix);
    return 0;
}
char *intopost(char *s, int n) 
{
    int top = -1, j = 0;
    char *ans, *stack, c;
    stack = (char *)malloc((n + 2) * sizeof(char));
    ans = (char *)malloc((n + 1) * sizeof(char));
    stack[++top] = '(';
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (isalnum(s[i]))
            ans[j++] = s[i];
        else if (s[i] == '(')
            stack = push(stack, s[i], &top, n);
        else if (s[i] == ')') 
        {
            while (top != -1 && stack[top] != '(') {
                ans[j++] = pop(stack, &top);
            }
            pop(stack, &top); // Remove '(' from stack
        } 
        else if (isOperator(s[i])) 
        {
            while (top != -1 && precedence(stack[top]) >= precedence(s[i])) 
            {
                ans[j++] = pop(stack, &top);
            }
            stack = push(stack, s[i], &top, n);
        }
    }
    while (top != -1 && stack[top] != '(') 
    {
        ans[j++] = pop(stack, &top);
    }
    ans[j] = '\0';
    return ans;
}
char *push(char *stack, char a, int *top, int n)
{
    if ((*top) == n - 1) 
    {
        printf("Stack Overflow\n");
        return stack;
    }
    stack[++(*top)] = a;
    return stack;
}
char pop(char *stack, int *top) 
{
    if ((*top) == -1) 
    {
        printf("The stack is empty\n");
        return '\0';
    }
    return stack[(*top)--];
}

int precedence(char op) 
{
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else if(op=='^')
    	return 3;
    return 0;
}

int isOperator(char c) 
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c=='^');
}
