#include<iostream>
#include<string>
using namespace std;


class bua
{
	public :
		
		void relative()
		{
			cout<<"Called relative"<<endl;
		}
		bua()
		{
			cout<<"Called Constructor"<<endl;
			cout<<"bua ka ladka "<<endl;
		}	
};
int main()
{
	
	//Constructor is invoked by default
	//whenever object is created
	
	
	bua b;
//	b.relative();

//Distructor is called at last

}