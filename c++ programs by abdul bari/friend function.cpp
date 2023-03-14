#include<iostream>
using namespace std;

class test{
	int a;
	int b;
	friend void func();
};
void func()
{   
	test t;
	t.a=10;
	cout<<t.a;
	t.b=20;
	cout<<t.b;
}
int main()
{
	func();
}
