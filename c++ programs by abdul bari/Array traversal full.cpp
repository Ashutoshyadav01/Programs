#include<iostream>
using namespace std;
void display(int A[],int b )
{
	for(int i=0;i<b;i++)
	{
		cout<<A[i]<<"\n";
	}
}
void append(int A[],int b,int x)
{   
    b=b+1;
	A[b]=x;
	for(int i=0;i<b;i++)
	{
		cout<<A[i]<<"\n";
	}
	
}
int main()
{   int n,x;
    cout<<"enter the size of an array";
    cin>>n;
	int A[n];
    for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	display(A,n);
	cout<<"ENTER THE ELEMENT TO APPEND IN AN ARRAY"<<endl;
	cin>>x;
	append(A,n,x);	
	
}
