#include<iostream>
using namespace std;


class a 
{
	public :
		void display()
		{
//			b::display();
			cout<<"a class"<<endl;
		}	
};
class b
{
	public :
		void display()
		{
			cout<<"b class"<<endl;
		}
};
class c :public a,public b
{
	public :
		void display()
		{
			/*
			
			class name :: function();
			:: is called scope resolution
			*/
			a::display();
			b::display();
			cout<<"c class"<<endl;
		}
};


int main()
{
	c obj;
	obj.display();
	
}