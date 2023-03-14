#include<iostream>
using namespace std;
class rectangle{
	public:
	void display()
	{
	cout<<"rectangle function";
	}
};
class cuboid:public rectangle
{ public:
void show()
{

  cout<<"cuboid the derived class function";
}
};
int main()
{
	rectangle *p;
	p->display();
	cuboid d;
	p=&d;
//	cout<<p->show(); //base pointer cant acess the member of derived class even after passing the addres of derived class object.
	
}
