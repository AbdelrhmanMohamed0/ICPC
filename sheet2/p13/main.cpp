#include <iostream>

using namespace std;

int main()
{
       cin.tie(0);
    cin.sync_with_stdio(0);
    int a,m,n,z,c,sum=0;
    cin>>a;
    for(int i=0; i<a ;i++){
            cin>>n>>m;
            z=min(m,n);
    c=max(m,n);
 for(int i=z+1 ;i<c ;i++){
    if(i%2!=0)
    sum+=i;}
    cout<<sum<<"\n";
    sum=0;}
    return 0;
}
