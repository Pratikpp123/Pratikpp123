#include<iostream>
using namespace std ;
# define max 5

class stack
{
	private : int arr[max],top ;
	public : stack(){top = 0 ;	}
	int isempty();  int isfull() ; int push() ;  int pop() ;  int display() ; int output() ;
	
};
int stack :: isempty()
{
	if(top==0)
   {cout<<"stack is empty" ;
	return 1 ;}
	else return 0;
}
int stack :: isfull()
{
	if(top==max)
	{
		cout<<"stack is full " ;
		return 1 ;
	}
	else return 0;
}
int stack :: push()
{  int n;
	if(isfull())
	{
		cout<<"cannot insert any more item ";
	}else
	{
		cout<<"enter the element you want to push ";
		cin>>n ;
		arr[top]=n ; top++ ;
		cout<<"pushed element is "<<n ;
	}
}
int stack :: pop()
{
	if(isempty())
	cout<<"cant remove any item ";
	else
	{
		top-- ;
		cout<<"popping element is "<<arr[top];
	}
}
int stack :: display()
{
	for(int i=0; i<max ;i++)
	{
		cout<<arr[i] << " ";
	}
}
int stack :: output()
{
	int ch,n;
	do{
		cout<<"\n press 1 to push , 2 to pop , 3 to display and 4 to exit ";
		cin>>ch ;
		switch(ch)
		{
			case 1 : push(); break ;
			case 2 : pop() ; break ;
			case 3 : display() ; break ;
			case 4 : exit(0) ; break ;
		}
	}while(ch!=4);
}
int main()
{
	stack s ;
	s.output() ;
	return 0 ;
}
