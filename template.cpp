//FUNCTION TEMPLATE
/*#include<iostream>
using namespace std ;
template <class t>
t sum(t a, t b)
{
	return a+b ;
}
int main()
{
	cout << "int sum :"<<sum(5,9)<<endl ;
	cout << "float sum :"<<sum (1.1,2.2);
	return 0 ;
	
}*/
//CLASS TEMPLATE
#include<iostream>
using namespace  std ;
template <typename t>
class math
{
	t f,s ;
	public :
		math()
		{
		}
		math(t a, t b)
		{
			f=a;
			s=b;
		}
		void add() ;		void multiply();
};
template <typename t>
void math<t>::add()
{
	cout<<"addition:"<<f+s<<endl ;
} 
template <typename t>
void math<t>::multiply()
{
	cout<<"multiplication is:"<<f*s<<endl ;
}
int main()
{
	math <double > obj(10,20);
	obj.add();
	obj.multiply();
	return 0 ;
}
