#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
cin>>n;
for(n; n>=10; n=(n/10)){}
if(n%2==0)
    cout<<"EVEN";
else
    cout<<"ODD";
    //or
    /*string X;
cin>>X;
if(X[0]%2==0)
cout<<"EVEN";
else
cout<<"ODD";*/
    return 0;
}
