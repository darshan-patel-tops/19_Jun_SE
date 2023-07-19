#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	
	string data;
	ofstream filename;
	
	filename.open("tops.txt",ios::app);
	
	cout<<"Enter data: "<<endl;
	getline(cin,data);

	filename<<data;	
	filename.close();
	
	ifstream outfile;
	outfile.open("tops.txt",ios::in);
    getline(outfile,data);

	cout<<data;
}
