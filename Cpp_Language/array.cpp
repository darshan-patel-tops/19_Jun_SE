#include<iostream>
using namespace std;
int total=0;
class student
{
	public :
		int marks[5];
		string name;
		

		void input()
		{
			cout<<"Enter your name:"<<endl;
			cin.ignore();
				getline(cin,name);
			
			for(int i=0;i<5;i++)
			{
				cout<<"Marks: ";
				cin>>marks[i];
				total += marks[i];
				
			}
		}
		void display()
		{
			cout<<name<<endl;
			for(int i=0;i<5;i++)
			{
				
				cout<<"marks: "<<marks[i]<<endl;
				cout<<total;
			}
		}
};


int main()
{
	int a;
	cin>>a;
		student s[a];
		for(int i=0;i<a;i++)
		{
				s[i].input();
			
		}
		for(int i;i<a;i++)
		{
			s[i].display();
		}
}