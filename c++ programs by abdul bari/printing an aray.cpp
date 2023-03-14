#include<iostream>
using namespace std;
int main()
{   int n;
	cout<<"enter the number of element to insert in an array";
	cin>>n;
	int A[n];
	int sum;
	
	for(int i=0;i<=n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<=n;i++)
	{
		cout<<A[i]<<" ";
		 sum=sum+A[i];
	}
	cout<<"\nsum of all elements are :"<<sum;
	
}
