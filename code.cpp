#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
const int MAX=100;

class bank
{
	int id[MAX],balance[MAX];
	string name[MAX];
	int count;
public:
	void getcount()
	{
		count=0;
	}
	void getdetails();
        void showdetails();
	void addbalance();
	void removemoney();
	void showtotal();
};

void bank::getdetails()
{
	cout<<"Enter ID of customer: "<<endl;
	cin>>id[count];
	cout<<endl;
	cout<<"Enter Name: "<<endl;
	cin>>name[count];
	cout<<endl;
	cout<<"Enter Balance: "<<endl;
	cin>>balance[count];
	cout<<endl;
	count++;
}
void bank::showdetails()
{
	int i,a;
	cout<<"Enter ID: "<<endl;
	cin>>a;
	for (i=0;i<count+1;i++)
	{
		if (id[i]==a)
		{
			cout<<"ID: "<<id[i]<<"\tName: "<<name[i]<<"\tBalance: "<<balance[i]<<endl;
			break;
		}
	}
}
void bank::addbalance()
{
	int i,a,b;
	cout<<"Enter the ID of Customer: "<<endl;
	cin>>a;
	for (i=0;i<count+1;i++)
	{
		if(id[i]==a)
		{
			cout<<"ID: "<<id[i]<<"\tName: "<<name[i]<<"\tBalance: "<<balance[i]<<endl;
			cout<<"Enter the Additional Ammount: "<<endl;
	        cin>>b;
			balance[i]=balance[i] +b;
			cout<<"ID: "<<id[i]<<"\tName: "<<name[i]<<"\tNew Balance: "<<balance[i]<<endl;
			break;

		}
		else
		{
			cout<<"Wrong ID "<<endl;
			cout<<endl;break;
		}
	}
	
	


}
void bank::removemoney()
{
	int i,a,b;
	cout<<"Enter the ID of Customer: "<<endl;
	cin>>a;
	for (i=0;i<count+1;i++)
	{
		if(id[i]==a)
		{
			cout<<"ID: "<<id[i]<<"\tName: "<<name[i]<<"\tBalance: "<<balance[i]<<endl;
			cout<<"Enter the Ammount to withdraw: "<<endl;
			cin>>b;
			balance[i]=balance[i] - b;
			cout<<"ID: "<<id[i]<<"\tName: "<<name[i]<<"\tNew Balance: "<<balance[i]<<endl;
			break;
		}
		else
		{
			cout<<"Wrong ID"<<endl;
			cout<<endl;break;
		}
		
	}
	
}
void bank::showtotal()
{
	int sum=0;
	for ( int i=0;i<count;i++ )
		{
			cout<<"ID: "<<id[i]<<"\tName: "<<name[i]<<"\tBalance: "<<balance[i]<<endl;
			sum = sum + balance[i];
		}
	cout<<"Total Money in the bank: "<<sum<<endl;
}

int main()
{
	int choice;
	bank b1;
	b1.getcount();
	do
	{
	cout<<"1. Add Customer"<<endl;
	cout<<"2. Show details of customers"<<endl;
	cout<<"3. Add Balance to account"<<endl;
	cout<<"4. Withraw Money"<<endl;
	cout<<"5. Total Money in Bank"<<endl;
	cout<<"6. Exit"<<endl;
	cin>>choice;
	switch(choice)
		{
			case 1: b1.getdetails();break;
			case 2: b1.showdetails();break;
			case 3: b1.addbalance();break;
			case 4: b1.removemoney();break;
			case 5: b1.showtotal();break;
			case 6: exit (0);break;
			default: cout<<"Please Enter a choice: "<<endl;break;
		}
	}
	while(2>1);
}
