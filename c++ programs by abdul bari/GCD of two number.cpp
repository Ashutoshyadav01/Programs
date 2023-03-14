#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter two number";
	cin>>a>>b;
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else if(b>a)
		{
			b=b-a;
		}
	}
	cout<<a;
}
