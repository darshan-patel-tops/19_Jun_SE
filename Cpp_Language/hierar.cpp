#include<iostream>
using namespace std;

class dada
{
	public :
		void land()
		{
			cout<<"dada ka property"<<endl;
		}	
};

class papa : public dada
{
	public :
		void land()
		{
			dada::land();
			cout<<"baap ki zameen"<<endl;	
		}	
};
class chacha : public dada
{
	public :
		void land()
		{
			dada::land();
			cout<<"chacha ki zameen"<<endl;	
		}	
};
class baapkabadabhai : public dada
{
	public :
		void land()
		{
			dada::land();
			cout<<"baapkabadabhai ki zameen"<<endl;	
		}	
};