#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
   int n,x,a,b;
   cin>>n>>x;
   a=max(n,x);
   for(int i=1; i<=a; i++)
    if(n%i==0&&x%i==0)
        b=i;
   cout<<b;
    return 0;
}
//or
//cout<<__gcd(x,n);
