#include <iostream>

using namespace std;

int main()
{
     cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int k=1;k<=(n-i);k++)
        cout<<" ";
        for(int j=1;j<=(2*i-1);j++)
            cout<<"*";
            cout<<"\n";}
    for(int i=n;i>=1;i--){
      for(int k=(n-i);k>=1;k--)
        cout<<" ";
        for(int j=(2*i-1);j>=1;j--)
            cout<<"*";
        cout<<"\n";}
    return 0;
}
