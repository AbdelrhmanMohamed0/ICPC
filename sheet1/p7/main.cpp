#include <bits/stdc++.h>
using namespace std;
int main()
{
  char n;
  cin>>n;
  if(n>=65&&n<=90)
    cout<<"ALPHA"<<"\n"<<"IS CAPITAL";
    else if(n>=97&&n<=122)
     cout<<"ALPHA"<<"\n"<<"IS SMALL";
    else
    cout<<"IS DIGIT";
    return 0;
}
