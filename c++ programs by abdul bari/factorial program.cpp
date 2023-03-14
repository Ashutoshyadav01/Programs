#include<iostream>
using namespace std;
int main()
{
	int n;
	long int fact=1;
	cout<<"enter the number you want factorial\n";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
	fact=fact*i;	
	}
	cout<<"factorial of "<<n<<" is "<<fact;
	return 0;
}
