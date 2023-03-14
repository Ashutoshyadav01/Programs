#include<iostream>
using namespace std;
int append(int ,int );
int A[10];

int main()
{   int n,elem;
	
	cout<<"enter the number you want to enter"<<endl;
	cin>>n;
	if(n<10)
	{
	
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
    }
    else
    {
    	cout<<"you are exceeding the limit"<<endl;
	}
	cout<<"your array is"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<",";
	}
    append(4,n);
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
   	
}
int append(int elem,int n)
{
cout<<"enter the element you want to add in the last of an array"<<endl;
	cin>>elem;
	A[n]=elem;
	n++;
}
