#include <iostream>
using namespace std;
int may();
void printSomething();
int calc();
void mine();
void yours();
int main() 
{
cout<<"touse calculator input 'calc'"<<endl<<"to do ball test input 'ball'"<<endl;
string t;
cin>>t;
if(t=="ball")
{
  may();
}
else if(t=="calc")
{
  calc();
}
else
{
  cout<<"error";
}

   return 0;
}