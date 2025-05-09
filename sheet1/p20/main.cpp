#include <bits/stdc++.h>
using namespace std;
int main()
{
   short n,m,a,b;
  double x;
  cin>>n>>m;
  cin>>a>>b;
    x=((double)a/b);
for(int i=0;i<n-1;i++){
    cin>>a>>b;
    if(x>((double)a/b))
         x=((double)a/b);}
         cout<<fixed<<setprecision(8)<<x*m<<endl;
    return 0;
}
