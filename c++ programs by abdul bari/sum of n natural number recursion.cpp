#include<iostream>
using namespace std;
int sum(int a)
{   int s=0;

	if(a<=0)
	return 0;
	else
	int s;
	s=s+a;
    sum(a-1);
	return s;
}
int main()
{
	int x;
	cout<<sum(x);
}
