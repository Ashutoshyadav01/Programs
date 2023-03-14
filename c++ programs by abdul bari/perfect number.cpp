#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"enter the number for knowing it is perfect number or not \n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" is facor of "<<n<<endl;
			sum=sum+i;
			
		}
		
	}
	if(2*n == sum)
		{
			cout<<n<<" is perfect number";
		}
		else 
		{
			cout<<n<<" is not a perfect number";
		}
}
