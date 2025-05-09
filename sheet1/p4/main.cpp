#include<bits/stdc++.h>
using namespace std;
int main()
{double a,b,c,x,z;
cin>>a>>b>>c;
x=min(a,b);
z=max(a,b);
if(x<min(a,c))
    cout<<x<<" ";
else
    cout<<min(a,c)<<" ";
if(z>max(a,c))
    cout<<z;
    else
    cout<<max(a,c);
    return 0;
    //or
    //    cout << min (min(x,y),z)<<" "<<max(max(x,y),z)<<endl;
}
