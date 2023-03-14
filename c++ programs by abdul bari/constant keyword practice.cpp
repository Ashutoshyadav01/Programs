#include<iostream>
using namespace std;
//define x 10 if you want to make x constant globally use this..
class demo{
	public:
	int x=10;
	int y=20;
	void display(){
		x++;
		cout<<x<<" "<<y<<endl;
	}
};
int main()
{   
	//const int x=10;
	//x++;--->after using const keyword we cant increment x..
	//cout<<x<<endl;
	
	
	//using const on pointer so that it can only read it cant write it.
	//int x=10;
	//const int *p=&x;
	//++*p; now it will not work bacause we made pointer as constant..
	//cout<<*p;
	
	
	//we can lock the pointer so that it can not point to another variable ..
	//int x=10;
	//int *const p=&x;
	//cout<<x<<endl;
	//int y=13;
	//p=&y;//pointer will not work on this coz we used const keyword to lock the pointer so now it cannnot be manipulated..
	//cout<<y;
}
