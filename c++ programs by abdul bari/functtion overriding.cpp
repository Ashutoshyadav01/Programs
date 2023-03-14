#include<iostream>
using namespace std;
class base{
	public:
     void display()
     {
     	cout<<"base class ";
	 }
};
class derived:public base{
	void display()
	{
		cout<<"derived class";
	}
};
int main()
{
	base a;
	cout<<a.display();
	derived b;
	cout<<b.display();
}
