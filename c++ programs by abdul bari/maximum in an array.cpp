#include<iostream>
using namespace std;
int main()
{  
    int n;
    cout<<"enter the number of element to insert in an array";
    cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int max=A[0];
	for(int i=0;i<5;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	cout<<"\n";
	cout<<"the maximum in these element is"<<max;
	
}
