#include<iostream>
using namespace std;
class rectangle{
	public:
	int length;
	int breadth;
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};
int main()
{
	rectangle o1,o2;
	o1.length=10;
	o1.breadth=20;
    cout<<o1.area()<<endl;;
    cout<<o1.perimeter();
}
