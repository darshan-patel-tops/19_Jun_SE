#include<iostream>
using namespace std;

template<class obj>
obj cube(obj &number)
{
//	cout<<"cube is "<<number*number*number<<endl;
	return number * number * number;
}




int main()
{
	int num;
	cout<<"Enter a number :"<<endl;
	cin>>num;
	cout<<"Cube of "<<num<<" is :"<<cube(num)<<endl;
		
}