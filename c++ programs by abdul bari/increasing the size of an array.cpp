#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=new int[5];
	p[0]=10;
	p[1]=20;
    p[2]=40;
    p[3]=65;
    p[4]=11; 
    int *q;
    q=new int[10];
    for(int i=0;i<5;i++)
    {
    	q[i]=p[i];
    	
	}
	delete []p;
	p=q;
	q=NULL;
    
    for(int i=0;i<5;i++)
    {
    	cout<<p[i]<<endl;
	}
}
