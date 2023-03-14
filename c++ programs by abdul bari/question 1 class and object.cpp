#include<iostream>
using namespace std;
class student
{   public:
	string name;
	int roll;
};
int main()
{
	student s;
	s.name="jhon";
	s.roll=2;
	cout<<s.name<<endl;
	cout<<s.roll;
}
