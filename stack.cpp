#include<iostream>
using namespace std;
struct stackNode {
 int data;
 struct stackNode *nextPtr;
};
struct StackNodePtr
{
	struct stackNode *stack;
	int size;
}S;
//S stack 

int isEmpty( StackNodePtr *topPtr )
{
	if(topPtr->size==0)
	return true;
	else
	return false;
}
int pop( StackNodePtr *topPtr )
{
	int temp;
struct stackNode *ptr;
if(topPtr->stack==NULL)
 exit(1);
 ptr=topPtr->stack;
 temp=ptr->data;
 topPtr->stack=ptr->nextPtr;
 topPtr->size--;
 return temp;	
	
}
void push( StackNodePtr *topPtr, int value )
{struct stackNode *ptr;
ptr=new struct stackNode;
ptr->data=value;
ptr->nextPtr=topPtr->stack;
topPtr->stack=ptr;
topPtr->size++;
	
}
int hesapla(int a,int b,char c)
{
	switch (c)
{
    case '+':
       return a+b;
        break;

    case '-':
        return a-b;
        break;
        
        
        case '/':
        	if(b!=0)
             return a/b;
             break;
             case '*':
        return a*b;
        break;
    default:
        cout<<"Hata msj";
}
	
}
int evaluatePostfixExpression( char *expr )
{
	int a,b;
	if(isEmpty(&S)<0)
	 a=pop(&S);
	else
	cout<<"Stact bos";
	if(isEmpty(&S)<0)
	 b=pop(&S);
	else
	{
	cout<<"Stack'de sadece Bir elemam var";
	push(&S,a);
	return false;
	}
	return(hesapla(a,b,*expr));
}





void printStack( StackNodePtr *topPtr )
{
struct stackNode *ptr;
ptr=topPtr->stack;
bool k=true;
while(k)
{
	cout<<ptr->data;
	if(ptr->nextPtr==NULL)
	k=false;
	else
	ptr=ptr->nextPtr;
	}	
	
	
	
	
}

int main()
{
	
	push(&S,17);
    push(&S,21);
    push(&S,23);
    push(&S,24);
    push(&S,25);
    printStack(&S);
    pop(&S);
    printStack(&S);
	
	
	
	return 0;
	
	
	
	
}
