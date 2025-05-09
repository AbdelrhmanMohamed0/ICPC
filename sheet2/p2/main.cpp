#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=1; i<=n;i++)
    for(int j=1; j<=12;j++){
            if(i==n)
    cout <<i<<" * "<<j<<" = "<<i*j<<"\n";}
    return 0;
}
//or
/*
int main() {
int n;
cin>>n;
for(int i=1;i<=12;i++)
cout<<n <<" * "<<i<<" = "<<n*i<<"\n";
}
*/
