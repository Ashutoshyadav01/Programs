#include<iostream>
using namespace std;
class base{
	public:
	base(){
		cout<<"default costructor of base class"<<endl;
	}
	base(int x)
	{
		cout<<"parameterized constructor called:"<<x<<endl;
	}
};
class derived : public base
{   public:
	derived()
	{
		cout<<"default constructor of derived class"<<endl;
		
	}
	derived(int y)
	{
		cout<<"parameterized derived constructor is:"<<y<<endl;
	}
	derived(int x,int y):base(x) //parameterized base class contructor will be execute..
	{
		cout<<"parameterized constructor of derived class is:"<<y;
	}
};
int main()
{
	derived d(109,40);
}
