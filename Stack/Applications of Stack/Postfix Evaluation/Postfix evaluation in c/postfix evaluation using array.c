#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int postfixeval(int);
int *push(int *,int ,int *,int );
int pop(int *,int *);
int digicon(char *s);
int main()
{
    int i,n,c1=0,c2=0,ans;
    char *q,ch;
    printf("Enter the no. of terms for the postfix evaluation: ");
    scanf("%d",&n);
    ans=postfixeval(n);
    if(ans==0)
    	printf("The expression can't evaluated due to lack of operators/operands\n");
    else
    	printf("The ans of the expression is: %d",ans);
    return 0;
}
int postfixeval(int n)
{
    int i,*stack,a,b,top=-1,c,ans,d;
    char ip[10];
    stack=(int *)malloc((n+1)*sizeof(int));
    stack[n]='\0';
    for(i=0;i<n;i++)
    {
        c=0;
        printf("Enter term %d: ",i+1);
        scanf("%s",ip);
        if(isalnum(ip[0]))
        {
        	d=digicon(ip);
        	stack=push(stack,d,&top,n);	
		}
        else{
            switch(ip[0])
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
    if(top==0)
    	return stack[top];
    else
    	return 0;
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
int digicon(char *ip)
{
	int i,ans=0;
	for(i=0;i<strlen(ip);i++)
	{
		ans=10*ans+(int)(ip[i]-'0');
	}
	return ans;
}