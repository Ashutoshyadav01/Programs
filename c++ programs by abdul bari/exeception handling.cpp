#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=0,c;
	try{
		if(b==0)
		{
			throw 101;
		}
		c=a/b;
		cout<<c;
	}
	catch(int e){
		cout<<"errror is your code"<<e;
	}
}
