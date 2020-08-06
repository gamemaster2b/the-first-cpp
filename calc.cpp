#include <iostream>
using namespace std;
int calc()
{
  double x=0.0, y=0.0;
  char s;
  cout<<"enter your sum:\n";
  cin>>x>>s;
  while(s!='=')
  {
    cin>>y;
    switch(s)
    {
      case '+':
      x=x+y;
      break;
      case '-':
      x=x-y;
      break;
      case '*':
      x=x*y;
      break;
      case '/':
      if(y!=0)
      {
        x=x/y;
      }
      else
      {
        cout<<"error:\n"<<"division by zero.";
        return 0;
      }
      break;
      default:
      cout<<"syntax error.";
      break;
    }
    cin>>s;
  }
  cout<<"answer: "<<x<<endl;
  return 0;
}