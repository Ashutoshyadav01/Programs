#include<iostream>
using namespace std;

class bank
{   public:
	string n1,n2,n3;
	int amt,balance,dep;
	void open_account();
	int dep_amt();
	int withdra_amt();
	void display_det();
	
	
};
void bank::open_account()
{   
	cout<<"enter your full name";
	getline(cin,n1);
	cout<<"enter your father's name";
	getline(cin,n2);
	cout<<"enter your mother's name";
	getline(cin,n3);
	cout<<"ENTER AMOUNT YOU WANT TO DEPOSIT";
	cin>>dep;
	
	if(dep<=1000)
	{
		cout<<"sorry your account cannot be opened deposit some more amount"<<endl;
	}
	else
	balance=dep;	
}
int bank :: dep_amt()
{
	cout<<"enter the amount you wanted to add in your balance\n";
	cin>>amt;
	balance=balance+amt;
}
	int bank :: withdra_amt()
	{
		cout<<"enter the amount you wanted to withdrawl"<<endl;
		cin>>amt;
		if(amt%5==0 && amt>=500)
		{
			balance=balance-amt;
		}
		else
		{
			cout<<"enter the amount which is multiple of 5 and greater than 500"<<endl;
		}

	}
void bank :: display_det()
	{
		cout<<"your full name: "<<n1<<endl;
		cout<<"YOUR FATHER NAME IS :"<<n2<<endl;
		cout<<"your mother name is :"<<n3<<endl;
		cout<<"balance in your account "<<balance<<endl;
		
	}

int main()
{   bank b1;
    int a;
	cout<<"WELCOME TO YOUR AXIS BANK...."<<endl;
	do{
	
	
	cout<<"Press 1 to open an account"<<endl;
	cout<<"Press 2 to deposite an amount"<<endl;
	cout<<"Press 3 to withdrawl an amount"<<endl;
	cout<<"press 4 to see the details of an account"<<endl;
	cout<<"press 5 to delete an account"<<endl;
	cout<<"press 6 to exit"<<endl;
	cout<<"select one of the below to perform your action"<<endl;
	cin>>a;
	
	switch(a)
	{
	
	case 1:
		{
			b1.open_account();
			break;
		}
	case 2:
		{
		 b1.dep_amt();
		 break;
		}
	case 3:
		{
		b1.withdra_amt();	
		}
	case 4:
		{
		b1.display_det();
		}
	
}
}while(a!=6);
}

