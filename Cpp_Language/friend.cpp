#include<iostream>
using namespace std;


class money
{	
	friend void  dost();
	public :
	int a=10;	
	
	protected :
	int b=20;
	
	private :
	int c=30;
};
	void dost()
{
	money m;
	cout<<m.a<<endl;
	cout<<m.b<<endl;
	cout<<m.c<<endl;
	
}
main()
{

dost();
}