#include<iostream>
using namespace std;
struct Array{
	int A[15];
	int length;
	int size;
};
void display(struct Array a)
{
	int i;
	cout<<"elements are \n";
	for(int i=0;i<a.length;i++)
	{
		cout<<a.A[i];
	}
}
int main()
{
	struct Array a{{1,2,34,5},3,15};
	display(a);
}
