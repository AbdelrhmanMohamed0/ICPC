#include <bits/stdc++.h>
using namespace std;
int main()
{
char ch;
  cin>>ch;
if(ch>=65&&ch<=90){
    ch+=32;
cout<<ch;}
else if(ch>=97&&ch<=122){
    ch-=32;
cout<<ch;}
    return 0;
}
