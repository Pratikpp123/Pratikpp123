#include<iostream>
using namespace std ;
# define max 5
# include<cstring>
class cq
{
	private : int arr[max],front,rear ;
	public : que(){front = rear = -1 ;	}
  	int isempty();  int isfull() ; int enque() ;  int deque() ;  int display() ; int output() ;
	
};
int cq :: isempty()
{
	if(front==rear==-1)
   {cout<<"cqueue is empty" ;
	return 1 ;}
	else return 0;
}
int cq :: isfull()
{
	if((rear+1)%max == front)
	{
		cout<<"cqueue is full " ;
		return 1 ;
	}
	else return 0;
}
int cq :: enque()
{  int n;
	if(isfull())
	{
		cout<<"cannot insert any more item ";
	}else
		if(isempty())
		{   cout<<"enter the element" ;  cin>>n ;
			front=rear=0 ;
			arr[rear]=n ;
			cout<<"element inserted is"<<n ;
		}
	else
	{  	cout<<"enter the element you want to enque ";
		cin>>n ;
	    rear=(rear+1)%max ;
			arr[rear]=n ; 
		cout<<"enqued element is "<<n ;
	}
}
int cq :: deque()
{
	if(isempty())
	cout<<"cant remove any item ";
	else
	  if(front==rear){
	rear=front=-1 ;
		cout<<"dequed element is "<<arr[front];}
	else
	{
		front=(front+1)%max ;
		cout<<"dequed element is "<<arr[front];
	}
}
int cq :: display()
{
	for(int i=0; i<max ;i++)
	{
		cout<<arr[i] << " ";
	}
}
int cq :: output()
{
	int ch,n;
	do{
		cout<<"\n press 1 to enque , 2 to deque , 3 to display and 4 to exit ";
		cin>>ch ;
		switch(ch)
		{
			case 1 : enque(); break ;
			case 2 : deque() ; break ;
			case 3 : display() ; break ;
			case 4 : exit(0) ; break ;
		}
	}while(ch!=4);
}
int main()
{
	cq q ;
	q.output() ;
	return 0 ;
}

