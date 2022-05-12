#include<iostream>
#include<math.h>
using namespace std ;

int main()
{
	int d=0,n,i ;
	cout<<"enter binary number";
	cin>>n ;
	for(i=0;n>0;i++)
	{
		d=d+pow(2,i)*(n%10) ; 
		n=n/10 ;
	}
	cout<<"decimal no. is"<<d ;
	return 0 ;
}
