#include<iostream>
using namespace std;
int main()
{
	int w;
	float amt;
	cin>>w>>amt;
	if(w%5==0&&(w+0.5)<=amt)
	{
		cout<<amt-(w+0.5);
	}
	else
	cout<<amt;	
}
