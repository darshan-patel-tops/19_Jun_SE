#include<iostream>
using namespace std;



class calculator
{
	public :
		void addition(float a,float b)
		{
			cout<<"Addition is :"<<a+b<<endl;	
		}	
		void subtraction(float a,float b)
		{
			cout<<"Subtraction is :"<<a-b<<endl;	
		}	
		void division(float a,float b)
		{
			cout<<"Division is :"<<a/b<<endl;	
		}	
		void multiplication(float a,float b)
		{
			cout<<"Multiplication is :"<<a*b<<endl;	
		}	
		void modulo(int a,int b)
		{
			cout<<"Modulo is :"<<a%b<<endl;	
		}	
};



int main()
{
	float x,z;

	calculator calc;
	cout<<"Enter 2 Numbers:"<<endl;
	cin>>x>>z;
	
	int choice;
	cout<<"Enter Your Choice"<<endl;
	cin>>choice;
	
	if(choice == 1)
	{
		calc.addition(x,z);		
	}
	else if(choice == 2)
	{
		calc.subtraction(x,z);
	}
	else if(choice == 3)
	{
		calc.division(x,z);
	}
	else if(choice == 4)
	{
		calc.multiplication(x,z);
	}
	else if(choice == 5)
	{
		calc.modulo(x,z);
	}
	else
	{
//		cout<<"Enter Valid choice";
		calc.addition(x,z);
		calc.modulo(x,z);
		calc.subtraction(x,z);
		calc.multiplication(x,z);
		calc.division(x,z);
	}
}