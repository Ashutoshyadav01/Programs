#include<iostream>
using namespace std;
int main()
{   int n,r,sum=0,m;
	cout<<"enter the number to reverse it";
	cin>>n;
	m=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+(r*r*r);
		cout<<r;
	}
	if(sum==m)
	{
		cout<<"this number is amstrong";
	}
	else
	{
	
	cout<<"this not a amstrong number";
}
}
