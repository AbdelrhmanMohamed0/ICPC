#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
cin.sync_with_stdio(0);
short n,x;
cin>>n;
for(int i=1; i<=n; i++){
cin>>x;
long long z=1;
for(int j=x; j>=1; j--){
z*=j;}
cout<<z<<"\n";}
    return 0;
}
