#include<iostream>
using namespace std;
class complex{
	public:
		int real;
		int img;
		complex(int x,int y)
		{
			real=x;
			img=y;
		}
		complex add(complex t)
		{
			complex temp;
			temp.real=real+t.real;
			temp.img=img+t.img;
			return temp;
		}
};
int main(
{

complex c1=complex(3,4);
complex c2=complex(4,6);
complex c3;
c3=c1.add(c2);
cout<<c3.real<<"+"<<c3.img<<"i";
}
