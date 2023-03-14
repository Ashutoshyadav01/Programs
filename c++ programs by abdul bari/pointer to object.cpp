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
int perimeter ()
{
	return 2*(length + breadth);
}
};
int main()
{
	rectangle o1,o2;
	rectangle *p;
	p=&o1;
	p->length=2;
	p->breadth=4;
	cout<<"Area of rectangle is "<<p->area()<<endl;
	cout<<"Perimeter of rectangle is "<<p->perimeter()<<endl;
	return 0;
}
