#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"enter the number to know it's factor\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" is factor of "<<n<<endl;
			count++;
		}
		else
		{
			//cout<<i<<" is not a factor of "<<n<<endl;
		}
	
	}
	if(count==2)
		{
			cout<<n<<" is a prime number";
			
		}
		else 
		cout<<n<<" not a prime number";
		
}
