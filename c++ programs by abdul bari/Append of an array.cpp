#include<iostream>
using namespace std;
int main()
{
	int A[50];
	int n,x;
	cout<<"Enter the number of element you want to insert"<<"\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	
		cout<<"enter the element to add at last";
		cin>>x;
		
		A[n]=x;
		n++;
		cout<<"new array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<"\n";
	}
		
	

}
