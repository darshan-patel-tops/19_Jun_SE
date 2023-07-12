#include<iostream>
#include<string>
using namespace std;



class mobile
{
	
	/*
	
	encapsulation is 
	wrapping up the 
	data in the single unit
	*/
	public :
		void call()
		{
			cout<<"Call"<<endl;	
		}	
		void sms()
		{
			cout<<"sms"<<endl;	
		}	
		void utube()
		{
			cout<<"utube"<<endl;	
		}	
		void camera()
		{
			cout<<"camera"<<endl;	
		}	
		void muzik()
		{
			cout<<"muzik"<<endl;	
		}	
		void google()
		{
			cout<<"google"<<endl;	
		}	
};

int main()
{

mobile sunil;

sunil.call();
sunil.sms();
sunil.utube();
sunil.muzik();
sunil.google();




}

