#include<iostream>
using namespace std;

class node
{
	public: int data; node *next ;
};
class ll
{
	private: node *head,*head2; ;int n;
	public: ll(){ head = NULL ;}
	~ll(){;	}
 void create(); void del(); void insert(); void search() ; void sort(); void revtrav(node *p); void callrev(); void size(); void split(); void merge();
 void display();
};
void ll :: create()
{   node *temp,*first = new node ;
	cout<<"enter how many node you want to create ?"; cin>>n;
	cout<<"enter data for node 1 "; 
	cin>>first->data ;
	first->next = NULL ;
	
	temp = head = first ;
	
	for(int i=1;i<n;i++)
	{   node *last = new node ;
	    cout<<"enter data for node "<<i+1 ; 
		cin>>last->data ;
		last->next = NULL ;
		
		temp->next = last;
		temp=last ;
	}
	
}
void ll :: del()
{
	node *temp = head ; int p;
	cout<<"enter the position of node you want to delete";
	cin>>p ;
	if(p>n||p<1)
	cout<<"Invalid Position";
	else
	if(head==NULL)
	cout<<"LL is empty";
	else
	if(p==1)
	{
		head = temp->next ;
		cout<<"element deleted from ll is "<<temp->data ;
        delete temp ;   temp = head ;
		n--;
	 } 
}
void ll::insert()
{
	int p; node *temp = new node ;
	cout<<"enter data of new node you want to insert";   cin>>temp->data ;
	cout<<"enter position of new node you want to insert";   cin>>p ;
	   temp->next = NULL ;
	if(p>n+1||p<1)
	cout<<"invalid position";
	else 
	if(p==1)
	{
		temp->next = head ;
		head = temp ;
		n++;
	}
}
void ll :: search()
{
	node *p=head ; int s ;
	cout<<"enter the element to be searched" ; cin>>s;
	for(int i=1;p!=NULL;p=p->next,i++)
	{
		if(p->data==s)
		{
			cout<<"element "<<s<<" found at position "<<i ; break;
		}
		//	else cout<<"element not found ";
	}

}
void ll :: sort()
{
	node *i,*j,*s ; int t ;
	for(i=head;i!=NULL;i=i->next)
	{
		s=i;
			for(j=i->next;j!=NULL;j=j->next)
			{
				s=j;
			}
			t=s->data ; s->data = i->data ;  i->data = t ;
	}
	cout<<"sorted array :" ; display();
	
}
void ll :: revtrav(node *p)
{
	revtrav(p->next) ;
	cout<<p->data ;
}
void ll :: callrev()
{
	node *p=head;
	cout<<"rev traversal is";
	revtrav(p);
}
void ll :: size()
{   int c;
	for(node *p=head;p!=NULL;p=p->next)
	c++;
	cout<<"size of linked list is "<<c;
}
void ll :: split()
{
	int p ; head2 = NULL ;
	cout<<"enter position from where to split"; cin>>p ;
	node *t=head,*q ;
	for(int i=1;i<p-1;i++)
	{
		t=t->next;
		head2 = t->next;
		t->next=NULL;
	}
	cout<<"part 1 is :";
	q=head ;
	while(q!=NULL)
	{
		cout<<q->data;
		q=q->next;
	}
		cout<<"part 2 is :";
	q=head2 ;
	while(q!=NULL)
	{
		cout<<q->data;
		q=q->next;
	}
}
void ll :: merge()
{
	int x; node *p;
	cout<<"enter 1) to merge 2 to 1 else enter 2) to merge 1 to 2";
	cin>>x;
	switch(x)
	{
		case 1 : p = head;
		while(p->next!=NULL)
		{
			p=p->next;
			p->next = head2 ;
			p=head;
			cout<<"merged list is:";
			while(p!=NULL)
			{
				cout<<p->data;
				p=p->next;
			}break;
		}
		case 2 : p = head2 ;
			while(p->next!=NULL)
		{
			p=p->next;
			p->next = head ;
			p=head=head2;
			cout<<"merged list is:";
			while(p!=NULL)
			{
				cout<<p->data;
				p=p->next;
			}break;;
	}
  }
}
void ll :: display()
{   if(head==NULL)
      cout<<"LL is empty";
      else
  {
	node *p = head ;
	while(p!=NULL)
	{
		cout<<p->data ;
		p=p->next ;
	}
  }
}

int main()
{
	ll l ;
	l.create();
	l.del();
	l.insert();
	l.display();
	
	l.search();
	l.sort();
	l.size();
	l.split();
	l.merge();
	l.callrev();
	l.~ll();
	
	return 0 ;
}
