#include<iostream>
using namespace std;
int main()
{
	int t,p1,p2;
	cin>>t;
	for(int i=0;i<=t;i++)
	{
		cin>>p1>>p2;
		if(p1<p2)
		{
			cout<<"FRIST"<<endl;
		}
		else if(p1==p2)
		{
			cout<<"ANY";
		}
		else
		{
			cout<<"SECOND";
		}
	}
}
