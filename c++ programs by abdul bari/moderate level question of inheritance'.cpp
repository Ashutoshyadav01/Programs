#include<iostream>
using namespace std;
class rectangle{
	private:
		int length;
		int breadth;
	public:
	    int setLength(int x)
	    {
	    	length=x;
	    
		}
		int setBreadth(int b)
		{
			breadth=b;
		}
		int getLength()
		{
			return length;
		}
		int getBreadth()
		{
			return breadth;
		}
		int Area()
		{
			return length*breadth;
		}		
};
class cuboid:public rectangle{
	private:
		int height;
	public:
		int setHeight(int h)
		{
			height=h;
		}
		int getHeight()
		{
			return height;
		}
		int volume()
		{
			return Area()*height;
		}
};
int main()
{
	cuboid c1;
	c1.setLength(4);
	c1.setBreadth(2);
	c1.setHeight(30);
    cout<<"volume of cuboid is:"<<c1.volume()<<endl;
    cout<<"Area is:"<<c1.Area();
	}
