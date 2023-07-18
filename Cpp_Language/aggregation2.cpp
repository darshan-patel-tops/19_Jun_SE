#include<iostream>
using namespace std;


class cricket
{
		public :
			string name;
			int age;
			int match;
			
			void basic(string name,int age,int match)
			{
				this->age = age;
				this->name = name;
				this->match = match;
			}
};

class batsman
{
	public :
		
		int runs;
		
		void info(int runs,cricket* obj)
		{
				cout<<"Name : "<<obj->name<<endl
				<<"Age : "<<obj->age<<endl
				<<"match :"<<obj->match<<endl
				<<"Runs : "<<runs<<endl;
		}	
};

main()
{
	cricket c;
	c.basic("brijesh",32,300);
	batsman b;
	b.info(9000,&c);
}