#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream css("my.txt");
   css<<"ASHUTOSH IS A PROGRAMMER WHO IS MAKING THIS FILE THROUGH THE PROGRAM"<<endl;
   css<<12<<endl;
   
   css<<"thanks compiler for writing my sentences !!"<<endl;
   css.close();
   }
