#include <iostream>
using namespace std;
int x=0,z=1;
int main()
{
  cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin>>n;
    if(n==1)
        cout<<x<<"\n";
    else if(n==2)
        cout<<x<<" "<<z<<"\n";
    else{
        cout<<x<<" "<<z<<" ";
for(int i=2; i<n ;i++){
    long long res;
 res=x+z;
 cout<<res<<" ";
 x=z;
 z=res;}
    }
    return 0;
}
//or
/*
int n, a=0,b=1;
cin>>n;
while (n--)
{
cout<<a<<" " ;
a+=b;
swap(a, b) ;
}
*/
