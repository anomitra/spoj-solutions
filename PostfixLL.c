#include <stdio.h>
#include  <stdlib.h>

short isEmpty();
int pop();
void push();
void display();

typedef struct node
{
    int data;
    struct node* next;
}node;

node* top=0;

short isEmpty()
{
    if(top==0)
        return 1;
    else
        return 0;
}

int pop()
{
    if(isEmpty())
    {
        printf("\nStack is empty\n");
        return -1;
    }
    node* a=top;
    int b=a->data;
    a=a->next;
    top=a;
    return b;
}

void push()
{
    int b;
    printf("Enter number to insert : ");
    scanf("%d",&b);
    node* a = (node*)malloc(sizeof(node));
    a->data=b;
    if(top==0)
    {
        top=a;
        a->next=0;
        return;
    }
    a->next=top;
    top=a;

}

void display()
{
    node* a=top;
    if(isEmpty())
    {
        printf("\nStack is empty\n");
        return;
    }
    printf("Current stack is : ");
    while(a!=0)
    {
        printf("%d ",a->data);
        a=a->next;
    }
}

int main()
{
    char expr[50];
    printf("enter the expression");
    scanf("%s",&expr);
    int c,sum=0;
    c=0;
    while(c!=50)
    {
	if(expr[c]!='+'&&expr[c]!='-'&&expr[c]!='*'&&expr[c]!='/')
	{
	    int k;
	    k=(int) (expr[c]);
	    push(k);
	    continue;
	}
	else
	{
	    int p=pop();
	    int q=pop();
	    if(expr[c]=='+')
		push(p+q);
	    if(expr[c]=='-')
		push(p-q);
	    if(expr[c]=='*')
		push(p*q);
	    if(expr[c]=='/')
		push(p/q);
	}
    }
    printf("Result is: %d",expr[0]);
}
