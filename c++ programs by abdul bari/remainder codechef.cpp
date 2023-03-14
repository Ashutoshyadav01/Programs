#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		int a,b,rem=0;
		cin>>a>>b;
		rem=(a%b);
		cout<<rem<<endl;
	}
}
