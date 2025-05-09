#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,i=1,k;
    cin>>n;
    for(int j=1; j<=n ;j++){
            k=i+2;
        for(i;i<=k;i++)
        cout<<i<<" ";
        cout<<"PUM"<<"\n";
        i++;
    }
    return 0;
}
