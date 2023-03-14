#include<iostream>
using namespace std;
int main()
{
	int A[2][4];
	int y;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>A[i][j];
		}
		cout<<endl;
	}
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}
