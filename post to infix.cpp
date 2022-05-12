#include<iostream>
using namespace std ;
# define max 5
# include<cstring>
class pti
{
	private : int top ; string arr[max] ;
	public : pm(){top = 0 ;	}
    int push(string c) ;  string pop() ;  int convert() ; int output() ;
	
};
int pti :: push(string c)
{
	top++; arr[top]=c ;
}
string pti :: pop()
{
	string temp = arr[top] ; top-- ; return temp;
}
int pti :: convert()
{
	string str ;
	cout<<"enter the string to convert from postfix to infix" ;
	cin>>str ;   int n = str.size() ;
	     for(int i=0;i<n;i++)
	     {
	     	if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
	     	{
	     			string a = pop(); string b = pop() ;
	            	push(b + str[i] + a);
	            	cout<<"Infix expression is"<<arr[top];
			}
	           else 
	           {
	           	string s (1,str[i]); push(s);
			   }
		 }
}
int pti :: output()
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
	pti p ;
	p.output() ;
	return 0;
}
