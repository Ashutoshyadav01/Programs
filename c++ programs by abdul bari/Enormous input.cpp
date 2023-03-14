#include<iostream>
using namespace std;
int main()
{
	int x,y,num,count=0;
	cin>>x>>y;
	for(int i=0;i<x;i++)
	{
		cin>>num;
		if(num%y==0)
		{
			count++;
		}
	}
	cout<<count<<endl;
	
}
