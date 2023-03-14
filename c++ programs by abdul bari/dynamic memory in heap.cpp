#include<iostream>
using namespace std;
int main()
{
	int* p;
	p=new int[10];
	for(int i=0;i<9;i++)
	{
		cin>>p[i];
	}
	for(int i=0;i<9;i++)
	{
		cout<<p[i]<<" ";
		
	}
}
