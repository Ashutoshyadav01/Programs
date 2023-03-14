#include<iostream>
using namespace std;
int fun(int n);
int main()
{
	int x;
	cin>>x;
	fun(x);
}
int fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		cout<<n;
	}

}

