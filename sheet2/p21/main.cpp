#include <iostream>
using namespace std;
int main()
{
   cin.tie(0);
cin.sync_with_stdio(0);
int n,c=0;
cin>>n;
for(int i=1;i<=n;i++){
if(n%i==0)
   c++;
}
cout<<c<<"\n";
for(int i=1;i<=n;i++){
if(n%i==0)
cout<<i<<" ";
}
    return 0;
}
