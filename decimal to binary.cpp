#include<iostream>
using namespace std ;

int main()
{
	int n,i,s[10];
	cout<<"enter decimal no";
	cin>>n ;
	for(i=0;n>0;i++)
	{
		s[i]=n%2 ;
		n=n/2 ;
	}
		cout<<"binary no is" ;
	for(i=i-1;i>=0;i--)
	cout<<s[i] ;
	
	return 0 ;
}
