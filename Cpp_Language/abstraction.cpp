#include<iostream>


using namespace std;
//virtual class ka object nai ban skta
// and when you declare virtual function so the inheritance
//is compulsory and to implement that virtual function                                                                               




/*


virtual class classname
{
	virtual void functionname();
};

*/
 class relationship
{
	public :
	virtual	void goodnight();	
};


class ankit : public relationship
{
	public :
		void sms()
		{
			cout<<"bye"<<endl;
		}
		void goodnight()
		{
			cout<<"say good night"<<endl;
		}
};

int main()
{
	relationship r;
//	ankit a;
//	a.sms();
//	a.goodnight();
//	b.interest();
}