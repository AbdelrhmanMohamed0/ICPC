#include<bits/stdc++.h>
#include<cmath>
using namespace std;
void fast_io(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast_io();
unsigned long long a,b;
cin>>a>>b;
if(0<=a<=pow(10,18)&&0<=b<=pow(10,18)){
  cout<<(a%10)+(b%10) ;
}
 return(0);
}

