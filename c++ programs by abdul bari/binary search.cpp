#include<iostream>
using namespace std;
int main()
{
	int A[10]={12,15,19,20,25,30,32,36,38,400};
	int mid,l,h,key;
	l=0;
	h=10;
	cout<<"enter the key to find in an array";
	cin>>key;
	
	while(l<h)
	{
		mid=(l+h)/2;
		if(A[mid]==key)
		{
			cout<<"key find at index"<<mid;
		
		}
		else if(A[mid]<=key)
		{
			l=mid+1;
		}
		else
		{
			h=mid-1;
		}
		
	}
	cout<<"key element not found";
	
}
