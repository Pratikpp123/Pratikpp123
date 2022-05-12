#include<iostream>
using namespace std ;
#define max 10
class dh
{
	private: int arr[max]  ;
	public : dh(){ arr[max]={0} ;} 
	int insert(); int display() ; int output();
};
int dh :: insert()
{
	int n,index,hkey,i,hash2 ;
	cout<<"enter the element to insert in hash table " ;
	cin>>n ;
	hkey = n%max ;
	hash2 = 7-(n%7) ;
	for(int i=0;i<max;i++)
	{
		index=(hkey + i*hash2)%max ;
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
int dh :: display()
{
	int i ;
	cout<<"elements in the hash table are ";
	for(i=0; i<max; i++)
	{
		cout<<"\n at index "<<i<<"value "<<arr[i]; 
	}
}
int dh :: output()
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
	dh d;
	d.output();
	return 0;
}
