#include<iostream>
using namespace std;


class calculator
{
	public :
	void add(int a,int b)
	{
		cout<<"Inside main calc"<<endl;
//		cout<<"Enter two numbers:"<<endl;
//		cin>>a,b;
		cout<<"calculator= "<<a+b<<endl;
	}
};


class advance_calculator : public calculator
{
	public :
		void add(int a,int b , int c)
		{
//			cout<<"Enter three numbers:"<<endl;
//			cin>>a,b,c;
		cout<<"Inside child calc"<<endl;
			cout<<"advance_calculator= "<<a+b+c;
		}	
};

int main()
{
	advance_calculator calci;
//	calci.add(1,2,4);
//	calci.add1();
}