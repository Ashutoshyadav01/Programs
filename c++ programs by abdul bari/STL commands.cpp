#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v={10,30,40,23};
	v.push_back(29);
	v.push_back(32);
	v.pop_back();
	sort(v.begin(),v.end());
	
	for(auto x:v)
	{
		cout<<x<<" ";
	}
}
