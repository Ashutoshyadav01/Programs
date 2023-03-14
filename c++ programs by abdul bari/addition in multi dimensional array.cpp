#include<iostream>
using namespace std;
int main()
{
	int A[2][4]={2,2,2,2,2,2,2,2};
	int B[2][4]={5,7,4,8,9,4,2,5};
	int C[2][4];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
}
