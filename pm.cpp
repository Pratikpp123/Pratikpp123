#include<iostream>
using namespace std ;
# define max 5
# include<cstring>
class pm
{
	private : int arr[max],top ; char input[10] ;
	public : pm(){top = 0 ;	}
	int isempty();  int push(int x) ;  int pop() ;  int verify(char input[]) ; int output() ;
	
};
int pm :: isempty()
{
	if(top==0)
   	return 1 ;
	else return 0;
}
/*int pm :: isfull()
{
	if(top==max)
	{
		cout<<"stack is full " ;
		return 1 ;
	}
	else return 0;
}*/
int pm :: push(int x)
{ 
	top++ ;	arr[top]=x ; 
}
int pm :: pop()
{
	top-- ;
}
int pm :: verify(char input[])
{  
 int n = strlen(input) ;

       for(int i = 0;i<n; i++)
{ 
	if(input[i]=='(') push(1);
	else 
	if(input[i]=='{') push(2);
	else 
	if(input[i]=='[') push(3);
	else
	if(input[i]==')') 
	{
		if(isempty())
		{
			cout<<"right parenthesis are more than left parenthesis " ;
			return 0 ;
		}else
		if(arr[top]!=1)
		{
			cout<<"mismatch" ;
			return 0 ;
		}
		else pop() ;
	}
	else
    if(input[i]=='}') 	
    {
    		if(isempty())
		{
			cout<<"right parenthesis are more than left parenthesis " ;
			return 0 ;
		}else
		if(arr[top]!=2)
		{
			cout<<"mismatch" ;
			return 0 ;
		}
		else pop() ;
	}
	else
	if(input[i]==']')
	{
			if(isempty())
		{
			cout<<"right parenthesis are more than left parenthesis " ;
			return 0 ;
		}else
		if(arr[top]!=3)
		{
			cout<<"mismatch" ;
			return 0 ;
		}
		else pop() ;
	}
}
	if(top==0)
	{ cout<<"balanced";}
	else
		{
			if(top>0)
			cout<<"left more than right" ;
		}
}
int pm :: output()
{
	int ch;
	do{
		cout<<"\n press 1 to enter  and 0 to exit ";
		cin>>ch ;
		switch(ch)
		{
			case 1: cout<<"enter the input ";  cin>>input ;  verify(input) ;  break ;
			case 0: exit(0);
		}
	}while(ch!=0) ;
}
int main()
{
	pm p ;
	p.output() ;
	return 0;
}
