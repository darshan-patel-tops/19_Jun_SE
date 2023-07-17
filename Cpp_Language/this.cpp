#include<iostream>
using namespace std;

class base 
{
			int a,b,c;
	public :
			void numbers(int x,int y,int z)
			{
				this->a=x;
				this->b=y;
				this->c=z;
				
				cout<<a<<endl;
				cout<<b<<endl;
				cout<<c<<endl;
			}
};


int main()
{
	base b;
	b.numbers(1,5,7);
}