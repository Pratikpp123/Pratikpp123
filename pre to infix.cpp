#include<iostream>
using namespace std ;
# define max 5
# include<cstring>
class prti
{
	private : int top ; string arr[max] ;
	public : pm(){top = 0 ;	}
    int push(string c) ;  string pop() ;  int convert() ; int output() ;
	
};
int prti :: push(string c)
{
	top++; arr[top]=c ;
}
string prti :: pop()
{
	string temp = arr[top] ; top-- ; return temp;
}
int prti :: convert()
{
	string str ;
	cout<<"enter the string to convert from prefix to infix" ;
	cin>>str ;   int n = str.size() ;
	     for(int i=n-1;i>=0;i--)
	     {
	     	if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
	     	{
	     			string a = pop(); string b = pop() ;
	            	push(a + str[i] + b);
	            	cout<<"Infix expression is"<<arr[top];
			}
	           else 
	           {
	           	string s (1,str[i]); push(s);
			   }
		 }
}
int prti :: output()
{
	int ch;
	do{
		cout<<"\n press 1 to input  and 0 to exit ";
		cin>>ch ;
		switch(ch)
		{
			case 1: convert();  break ;
			case 0: exit(0);
			default : cout<<"please enter the correct options";
		}
	}while(ch!=0) ;
}
int main()
{
	prti p ;
	p.output() ;
	return 0;
}
