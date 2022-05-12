#include<iostream>
using namespace std ;
# define max 5
# include<cstring>
class que
{
	private : int arr[max],front,rear ;
	public : que(){front = rear = -1 ;	}
  	int isempty();  int isfull() ; int enque() ;  int deque() ;  int display() ; int output() ;
	
};
int que :: isempty()
{
	if(front==rear==-1||front>rear)
   {cout<<"queue is empty" ;
	return 1 ;}
	else return 0;
}
int que :: isfull()
{
	if(rear==max-1)
	{
		cout<<"queue is full " ;
		return 1 ;
	}
	else return 0;
}
int que :: enque()
{  int n;
	if(isfull())
	{
		cout<<"cannot insert any more item ";
	}else
	{   if(front==-1) front=0 ;
		cout<<"enter the element you want to enque ";
		cin>>n ;
	    rear++ ;	arr[rear]=n ; 
		cout<<"enqued element is "<<n ;
	}
}
int que :: deque()
{
	if(isempty())
	cout<<"cant remove any item ";
	else
	{
		cout<<"dequed element is "<<arr[front];
		front++ ;
	}
}
int que :: display()
{
	for(int i=front; i<=rear ;i++)
	{
		cout<<arr[i] << " ";
	}
}
int que :: output()
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
	que q ;
	q.output() ;
	return 0 ;
}
