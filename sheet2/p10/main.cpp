#include <iostream>
using namespace std;
int main()
{
       cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){
        for(int j=n; j>=i;j--)
        cout<<'*';
        cout<<"\n";}
    return 0;
}
