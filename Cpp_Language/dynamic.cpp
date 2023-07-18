#include<iostream>
using namespace std;

class animal
{
	public:
		 virtual void  voice()
		{
			cout<<"voice"<<endl;
		}
};


class dog : public animal
{
	public :
		void voice()
		{
			cout<<"woof"<<endl;
		}	
};

class cat : public animal
{
	public :
		void voice()
		{
			cout<<"meow"<<endl;
		}
};


main()
{
	
	animal* a;
	
//	a->voice();
	
	dog d;
	cat c;

	a = &d;
	a->voice();	
//	d.voice();
	
	
//	a = &c;
//	a->voice();
	
	
	
	
}