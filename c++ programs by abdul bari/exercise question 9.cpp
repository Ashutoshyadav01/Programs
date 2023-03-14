#include<iostream>
using namespace std;
class student
{   private:
	int roll;
	string name;
    float PhyMarks;
    float mathMarks;
    float chemMarks;
    public:
    	student(int a, string b, float c,float d,float f)
    	{
    		roll=a;
    		name=b;
    		PhyMarks=c;
    		mathMarks=d;
    		chemMarks=f;
		}
		float Total()
		{
			return PhyMarks+mathMarks+chemMarks;
		}
		float grade()
		{
			float avg=Total()/3.0;
			if(avg>80)
			{cout<<"A grade"<<endl;
			}
			else if(avg>60 && avg<80)
			{
				cout<<"B grade "<<endl;
			}
			else if(avg>100 || avg<0)
			{
				cout<<"invalid grade bacche"<<endl;
			}
			else
			cout<<"C grade "<<endl;
		}
};
int main()
{ int roll;
  string name;
  float phy,chem,maths;   
cout<<"ENTER THE ROLL NUMBER OF STUDENT "<<endl;
   cin>>roll;
   cout<<"ENTER THE NAME OF STUDENT"<<endl;
   cin>>name;
   cout<<"ENTER THE PHYSICS, CHEMISRTY AND MATHS MARKS OF STUDENT";
   cin>>phy;
   cin>>maths;
   cin>>chem;
   student o1(roll,name,phy,maths,chem);
   cout<<"TOTAL OF STUDENT IS "<<o1.Total()<<endl;
   cout<<" GRADE -------->> "<<o1.grade();
	
}
