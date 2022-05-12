#include<iostream>
using namespace std ;
#define max 10
class lph
{
	private: int arr[max]  ;
	public : lph(){ arr[max]==NULL ;} 
	int insert(); int display() ; int output();
};
int lph :: insert()
{
	int n,index,hkey,i ;
	cout<<"enter the element to insert in hash table " ;
	cin>>n ;
	hkey = n%max ;
	for(int i=0;i<max;i++)
	{
		index=(hkey + i)%max ;
		if(arr[index]==NULL)
		{
			arr[index]=n ; break ;
		}
	}
	if(i==max)
	{
		cout<<"cannot insert" ;
	}
}
int lph :: display()
{
	int i ;
	cout<<"elements in the hash table are ";
	for(i=0; i<max; i++)
	{
		cout<<"\n at index "<<i<<"\n value "<<arr[i]; 
	}
}
int lph :: output()
{
	int ch ;
	do{
		cout<<"press 1 to enter ,2 to display and 0 to exit";
		cin>>ch;
		switch(ch)
		{
			case 1 : insert(); 	break;
			case 2 : display(); break ;
		}
	}while(ch!=0);
}
int main()
{
	lph l;
	l.output();
	return 0;
}
