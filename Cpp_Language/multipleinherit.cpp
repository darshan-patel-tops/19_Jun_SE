#include<iostream>
using namespace std;


class father
{
	public :
		void land()
		{
			cout<<"father's land"<<endl;
		}	
};
class mother 
{
	public :
	void car()
	{
		cout<<"Mother's car"<<endl;
		}	
};

class son	:public father,public mother
{
	public:
		void land()
		{
			father::land();
			cout<<"Son's land"<<endl;
		}
		
};

int main()
{
	son s;
	s.land();
	s.car();
}