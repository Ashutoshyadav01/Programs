#include<iostream>
using namespace std;
struct Array{
	int A[10];
    int length;
    int size;
};
void display(struct Array arr)
{
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<",";
	}
}
void append(struct Array *arr,int elem)
{
	if(arr->length<arr->size)
	{
		arr->A[arr->length]=elem;
		//arr->length++;
	}
	else
	cout<<"you are exceeding the limit\n";
}
void insert(struct Array *arr,int index,int x)
{
	if(arr->length<arr->size)
	{
		for(int i=arr->length;i>index;i--)
		{
			arr->A[arr->length+1]=arr->length;
		}
	    arr->A[index]=x;
	    arr->length++;
	}
}
int main()
{ int elem;
  struct Array arr={{1,2,3,45,54},5,10};
  cout<<"enter the element you want to append"<<endl;
  cin>>elem;
  append(&arr,elem);
  //display(arr);
  insert(&arr,0,18);
  display(arr);
  
  	
}
