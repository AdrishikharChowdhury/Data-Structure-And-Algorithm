#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int postfixeval(char *,int);
int *push(int *,int ,int *,int );
int pop(int *,int *);
int main()
{
    int i,n,c1=0,c2=0,ans;
    char *q,ch;
    printf("Enter the no. of terms for the postfix evaluation: ");
    scanf("%d",&n);
    q=(char *)malloc((n+1)*sizeof(char));
    q[n]='\0';
    printf("Enter the provided question: ");
    scanf("%s",q);
    for (int i = 0; q[i] != '\0'; i++) 
	{
        if (isalnum(q[i]))
            c1++;
        else
            c2++;
    }
    if(c1!=c2+1)
    {
        printf("The postfix evaluation can't be possible due to lack of operators.Try Again!!\n");
        return main();
    }
    ans=postfixeval(q,n);
    printf("The postfix evaluated ans is: %d",ans);
    return 0;
}
int postfixeval(char *s,int n)
{
    int i,*stack,a,b,top=-1,c,ans;
    stack=(int *)malloc((n+1)*sizeof(int));
    stack[n]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        c=0;
        if(isalnum(s[i]))
            stack=push(stack,s[i]-'0',&top,n);
        else{
            switch(s[i])
            {
                case '+':
                    a=pop(stack,&top);
                    b=pop(stack,&top);
                    stack=push(stack,(b+a),&top,n);
                    break;
                case '-':
                    a=pop(stack,&top);
                    b=pop(stack,&top);
                    stack=push(stack,(b-a),&top,n);
                    break;
                case '*':
                    a=pop(stack,&top);
                    b=pop(stack,&top);
                    stack=push(stack,(b*a),&top,n);
                    break;
                case '/':
                    a=pop(stack,&top);
                    b=pop(stack,&top);
                    stack=push(stack,(b/a),&top,n);
                    break;
                case '^':
                    a=pop(stack,&top);
                    b=pop(stack,&top);
                    stack=push(stack,(int)pow(b,a),&top,n);
                    break;
                default:
                    c=1;
                    printf("Unknown operator can't evaluate\n");
            }
            if(c==1)
            {
                printf("The operator entered is unknown can't evaluate\n");
                return 0;
            }
        }
    }
    return stack[top];
}
int *push(int *stack,int a,int *top,int n)
{
    if((*top)==n-1)
    {
        printf("The stack is overflowing\n");
        return stack;
    }
    stack[++(*top)]=a;
    return stack;
}
int pop(int *stack,int *top)
{
    if((*top)==-1)
    {
        printf("The stack is empty\n");
        return 0;
    }
    return stack[(*top)--];
}