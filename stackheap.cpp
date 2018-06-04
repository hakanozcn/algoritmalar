#include<iostream>
using namespace std;
class stack
{
	public:
		stack();
		bool push(int item);
		bool pop(int& item);
		bool pop(int* item);
		bool isempty();
		bool topret(int* item);
		void writeall();
		void deleteall();
		private :
			 int top;
			int A[20];	
};
stack::stack(){
	top =0;
}
bool stack::isempty(){
	if(top==0)
	return 1;
	return 0;
}
bool stack::push(int item){
	if(top<10)
	{
	A[top]=item;
	top++;
	return 1;
}
else
return 0;
}
bool stack::pop(int& item){
	
	if(top==0)
	return 0;
	else
	{item =A[top-1];
		top=top-1;
		return 1;
	}
}
bool	stack::pop(int* item)
	{
		
		if(top==0)
	return 0;
	else
	{*item =A[top-1];
		top=top-1;
		return 1;
		}
	}
void stack::writeall()
{for(int i=0;i<top;i++)
{cout<<A[i];
}
	
	}
	void stack::deleteall(){
		top=0;
	}	
int main ()

	{stack a;
	int b;
	int* c;
	
	for(int i=0;i<5;i++)
	{
	
			cin>>b;
		a.push(b);}
		a.writeall();
		a.pop(c);
		cout<<*c;
		a.pop(&b);
		cout<<b;
		a.writeall();
	}
	

