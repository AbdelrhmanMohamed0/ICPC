#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
cin.sync_with_stdio(0);
int z=0,c=0;
string n,x;
cin>>n;
x=n;
stringstream b;
   b<<x;
   b>>z;
    reverse(n.begin(), n.end());
stringstream a;
   a<<n;
   a>>c;
    if(z==c){
        cout<<z<<"\n";
        cout<<"YES";}
    else{
        cout<<c<<"\n";
        cout<<"NO";}
    return 0;
}
