#include<iostream>
using namespace std;
int sum(int x,int y, int z=0, int l=0)
{
	int s;
	s=x+y+z+l;
	return s;
}
int main()
{
	
	cout<<sum(10,20)<<endl;
	cout<<sum(10,40,50);
}

