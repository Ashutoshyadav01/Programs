#include<iostream>
using namespace std;
struct array
{
	int A[10];
	int length;
	int size;
};

void deleted(struct array *arr,int index)
{
	for(int i=index;i<arr->length;i++)
	{
		arr->A[i]=arr->A[i+1];
	}
	arr->length--;
}
int main()
{
	struct array arr={{1,2,3,4,5},5,10};
	int ind;
	cout<<"Enter the index you want to delete"<<endl;
	cin>>ind;
	
	delete(&arr,ind);
}
