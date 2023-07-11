#include<iostream>
#include<string>
using namespace std;
class mobile
{
	
	/*
	
	class consists of data member and member function
	data member means variable
	member function is just like normal function
	
	
	
	*/
		/*
		
			Access Modifire
			
			public :- it is like water 
		
			protected :- it is like juice 
		
			private:- it is like black water/wine
		
		
		
		*/
		
		
		
		public :
			
			void call()
			{
				cout<<"Called call function"<<endl;	
			}	
	
		
		
		
		
		
		
};

int main()
{
	/*to use the function of class we have to use object*/
	
	mobile m;
	
	m.call();
	m.call();
	m.call();
	m.call();
	m.call();
}