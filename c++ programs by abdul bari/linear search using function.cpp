#include<iostream>
using namespace std;
int LinearSearch(int A[],int x,int z)
{
	for(int i=0;i<z;i++)
	{
		if(A[i]==x)
		{
		cout<<"element found at index"<<i;
		}
		else
		return -1;
	
	}
}
int main()
{
	int A[]={12,34,56,78,89,56};
	int k;
    cout<<"enter the key element to find ";
    cin>>k;
    cout<<LinearSearch(A,k,5);
    
}
