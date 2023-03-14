#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		long long roll;
	    int phno;
		string Address;
};
int main()
{
	student s1,s2;
	s1.name="jhon";
	s1.roll=12;
	s1.phno=9452422162;
	s2.name="sam";
	s2.roll=5;
	s2.phno=9452422162;
	cout<<s1.name<<endl;
	cout<<	s1.roll<<endl;
	cout<<s1.phno<<endl;
}
