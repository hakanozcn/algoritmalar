#include<iostream>
using namespace std;
class dstack
{
	public:
		dstack(unsigned sizes =20);
		bool push(int item);
		bool pop(int& item);
		bool pop(int* item);
		bool isempty();
		bool topret(int* item);
		void writeall();
		void deleteall();
		void growarray(unsigned sizes =20);
		private :
			int size;
			 int top;
			int* pstack;	
};
dstack::dstack(unsigned sizes)
{pstack= new int[sizes] ;
size=sizes;
top=0;
	
}
bool dstack::isempty(){
	if(top<size)
	return 1;
	return 0;
}bool dstack::push(int item){
	if(top<size)
	{
	pstack[top]=item;
	top++;
	return 1;}
	else 
	return 0;
}
bool dstack::pop(int& item){
	
	if(top==0)
	return 0;
	else
	{item =pstack[top-1];
		top=top-1;
		return 1;
	}
}
bool	dstack::pop(int* item)
	{
		
		if(top==0)
	return 0;
	else
	{*item =pstack[top-1];
		top=top-1;
		return 1;
		}
		}
		void dstack::writeall()
{for(int i=0;i<top;i++)
{cout<<pstack[i];
}
	
	}
	void dstack::deleteall(){
		delete [] pstack;
		top=0;
	}
	void dstack::growarray(unsigned int sizes)
	{size=sizes +size;
	int * bstack;
		bstack =new int [sizes];
		for(int i=0;i<top;i++)
		{bstack[i]=pstack[i];
			
		}
		pstack=bstack;
	}int main ()

	{dstack a;
	int b;
	int* c;
	
	for(int i=0;i<5;i++)
	{
	
			cin>>b;
		a.push(b);}
	
		
		a.writeall();
		a.deleteall();
		return 0;
	}
	
