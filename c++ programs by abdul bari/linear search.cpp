#include<iostream>
using namespace std;
int main()
{
	int key;
	cout<<"enter the key element";
	cin>>key;
	int A[5]={21,34,56,765,82};
	for(int i=0; i<5 ; i++)
	{
		if(A[i]==key)
		{
			cout<<"index of your element is :"<<i;
		}
	
	}
    
}
