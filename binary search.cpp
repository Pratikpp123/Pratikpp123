#include<iostream>
using namespace std ;
class bs
{
	private: int arr[10],low,high     ;
	public : bs(){ low=0;	}
	int bsch(); int output();
};
int bs :: bsch()
{    int n,x,low=0;
	cout<<"enter how many elements ?"; cin>>n;
 	cout<<"enter those elements in sorted order :";   int high=n-1 ;
         for(int i=0;i<n;i++)
		 {
		 	cin>>arr[i];
			 }	
	cout<<"enter the element to be searched";
	cin>>x;
	while(low<=high)
	{
		int mid = (low+high)/2 ;
		if(arr[mid]==x)
		{cout<<"element is founded ie "<<arr[mid]<<" at location "<<mid+1 ; output();}
		else
		if(arr[mid]<x)
		{low=mid+1 ;}
		else
		{high=mid-1 ;}
		
	}
//	return 0;
}
int bs :: output()
{
	int ch;
	do{
		cout<<"\n press 1 to search and 0 to exit" ;
		cin>>ch;
		switch(ch)
		{
			case 1: bsch(); break;
			case 0: exit(0);
		}
	}while(ch!=1);
}
int main()
{
	bs b;
	b.output();
	return 0;
}
