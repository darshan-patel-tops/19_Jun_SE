#include<iostream>
#include<string>
using namespace std;

string name;
int age;

class cricketer
{
	public :
		cricketer()
		{
//			string name;
//			int age;
			cout<<"Enter Your Name:"<<endl;
			getline(cin,name);
			cout<<"Enter Your Age:"<<endl;	
			cin>>age;
			
			cout<<"Welcome "<<name<<" to our cricket team"<<endl;
			cout<<"Your age is:"<<age<<endl;
		}	
		
		bowler()
		{
			int match, wickets, maiden, runs;
			cout<<"Matches played:"<<endl;
			cin>>match;
			cout<<"Wickets taken:"<<endl;
			cin>>wickets;
			cout<<"Maiden Overs:"<<endl;
			cin>>maiden;
			cout<<"Runs Given:"<<endl;
			cin>>runs;	
			
			cout<<"Matches Played: "<<match<<endl;
			cout<<"Wickets taken: "<<wickets<<endl;
			cout<<"Maiden Overs:"<<maiden<<endl;
			cout<<"Runs Given:"<<runs<<endl;
			int economy;
			economy=runs/match;
			cout<<"Economy: "<<economy<<endl;
		}
		batsman()
		{
			int match, runs, century;
			cout<<"Matches played:"<<endl;
			cin>>match;
			cout<<"Runs scored:"<<endl;
			cin>>runs;
			cout<<"Century:"<<endl;
			cin>>century;
			
			cout<<"Matches played: "<<match<<endl;
			cout<<"Runs scored:"<<runs<<endl;
			cout<<"Century:"<<century<<endl;
			int average;
			average=runs/match;
			cout<<"Average: "<<average<<endl;
		}
		allrounder()
		{
			int match, maiden, wickets, runs_given, runs_scored, century;
			cout<<"Matches Played:"<<endl;
			cin>>match;
			cout<<"Maiden Overs:"<<endl;
			cin>>maiden;
			cout<<"Runs Given:"<<endl;
			cin>>runs_given;
			cout<<"Wickets taken:"<<endl;
			cin>>wickets;
			cout<<"Runs Scored:"<<endl;
			cin>>runs_scored;
			cout<<"Century:"<<endl;
			cin>>century;
			
			cout<<"Matches Played: "<<match<<endl;
			cout<<"Maiden Overs: "<<maiden<<endl;
			cout<<"Runs Given: "<<runs_given<<endl;
			cout<<"Wickets taken: "<<wickets<<endl;
			cout<<"Runs Scored:"<<runs_scored<<endl;
			cout<<"Century: "<<century<<endl;
		}
	
};


int main()
{
	cricketer c;
	
	string choice;
	cout<<"Welcome to our team"<<endl;
	cout<<"Your Role:"<<endl;
	cin>>choice;
	
	cout<<name<<" You Choose "<<choice<<endl;
	if(choice == "bowler" || choice == "Bowler" || choice == "BOWLER")
	{
//		cout<<"inside if"<<endl;
		c.bowler();
	}
	else if(choice== "batsman" || choice=="Batsman" || choice=="BATSMAN")
	{
		c.batsman();
	}
	else
	{
		c.allrounder();
	}
	
}