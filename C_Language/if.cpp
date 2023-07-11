#include<iostream>
using namespace std;

int main()
{
	int choice;
	int a,b;
	
	cout<<"Enter 2 Numbers"<<endl;
	cin>>a>>b;
//	cin>>a;
//	cin>>b;
	
	cout<<"Enter Your choice:"<<endl;
	cout<<"1 for add"<<endl;
	cout<<"2 for sub"<<endl;
	cout<<"3 for mul"<<endl;
	cout<<"4 for div"<<endl;
	cout<<"5 for mod"<<endl;
	cin>>choice;
	
	if(choice == 1)
	{
		cout<<"Addition is: "<<a+b<<endl;
	}
	else if(choice == 2)
	{
		cout<<"Subtraction is: "<<a-b<<endl;
	}
	else if(choice == 3)
	{
		cout<<"Multiplication is: "<<a*b<<endl;
	}
	else if(choice == 4)
	{
		cout<<"Division is: "<<a/b<<endl;
	}
	else if(choice == 5)
	{
		cout<<"Modulo is: "<<a%b<<endl;
	}
	else
	{
		cout<<"Enter valid number"<<endl;
	}
}