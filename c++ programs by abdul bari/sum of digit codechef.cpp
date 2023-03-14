#include<iostream>
using namespace std;
int main() {
   int T;
   cin>>T;
   for(int i=0;i<T;i++) {
      int N;
      cin>>N;
      int sum=0;
      while(N>0) {
         int ld = N%10;
         sum+=ld;
         N/=10;
         }
      cout<<sum<<endl;
      }
   }	

   
