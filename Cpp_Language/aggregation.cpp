#include<iostream>
#include<string>
using namespace std;
class info
{
	public :
		string name;
		string address;	
		void information(string name,string address)
		{
			this->name = name;
			this->address = address;
		}
};

class teacher 
{
	public :
//		info* in;
		
		int salary;	
		void detail(int salary,info* in)
		{
			cout<<"Name is: "<<in->name
			<<endl<<"Address is: "
			<<in->address<<endl
			<<"Salary is: "<<salary<<endl;
		}
};


 main()
{	
	teacher t;
	info i;
	i.information("ankit","ahmedabad");
	t.detail(100,&i);
	
}