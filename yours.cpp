#include <iostream>
using namespace std;

void printSomething() 
{
	cout << "Hi there!\n";
}

void mine()
{
    cout<<"this ball is mine.\n";
}

void yours()
{
    cout<<"this ball is yours."<<endl;
}

int may() 
{
	printSomething();
	char x;
	cout<<"enter input:";
	cin>>x;
	if(x=='m')
	{
	    mine();
	}
   else if(x=='y')
   {
       yours();
   }
   return 0;
}