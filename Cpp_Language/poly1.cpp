#include<iostream>

using namespace std;

int a,b,c;
class calc
{
	
public :
void add(int a,int b)
{
	cout<<"first wala "<<a+b;
}



};
class calc2 : public calc
{
	public :
		using calc::add;
	void add(int a,int b,int c)
{
	cout<<"second wala "<<a+b+c;
}	
};
int main()
{
	calc2 c;
	
	c.add(1,2,3);
}