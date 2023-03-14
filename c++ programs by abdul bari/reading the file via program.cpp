#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream opp;
	opp.open("my.txt");		
	string str;
	int x;
	string p;
	opp>>str;
opp>>x;
	opp>>p;
getline(str);
cout<<x<<" "<<p;	
	
	
}
