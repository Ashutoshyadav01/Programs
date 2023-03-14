#include<iostream>
using namespace std;
class base{
	public:
	int x;
	void display()
	{
		cout<<x<<endl;
	}
};
class derived : public base
{   public:
	int y;
	public:
		int show()
		{
			cout<<x<<" "<<y;
		}
};
int main()
{
	base v;
	v.x=3;
//	v.display();
	derived f;
	f.x=45;
	f.y=5;
	f.show();
	
}
