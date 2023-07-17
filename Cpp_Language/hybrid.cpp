#include<iostream>
using namespace std;

 class dada
{
	public :
	virtual	void  zameen()
		{
			cout<<"dada ki zameen"<<endl;
			}	
};

class papa : public virtual dada
{
			public :
//				
//	using dada::zameen;z
	
		

					void car()
					{
						cout<<"car"<<endl;
					}
};
class chacha : public  dada
{
			public :
//					using dada::zameen;

					void bike()
					{
						cout<<"bike"<<endl;
					}
};

class beta :public papa,public chacha
{
	public :

		void house()
		{
			cout<<"house"<<endl;
		}
};

main()
{
	beta b;
	b.car();
	b.bike();
	b.house();
	b.zameen();
	
}