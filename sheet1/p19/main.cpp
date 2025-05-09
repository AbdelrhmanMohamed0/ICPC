#include <bits/stdc++.h>
using namespace std;
int middleOfThree(short a, short b, short c)
{
    // Checking for b
    if ((a < b && b < c) || (c < b && b < a))
       return b;

    // Checking for a
    else if ((b < a && a < c) || (c < a && a < b))
       return a;

    else
       return c;
}
int main()
{
   short a,b,c,x,m;
   cin>>a>>b>>c;
if((a+b>c)&&(a+c>b)&&(b+c>a))
    cout<<0<<endl;
else{
x=max(c,max(a,b));
m=min(c,min(a,b));
    cout<<(x-(m+middleOfThree(a,b,c)))+1<<endl;}
return 0;
//or
//cout<<max(2*max(max(a,b),c)-((a+b+c))+1 , 0);
//or
/*int sum = 0;
        int mx = max({ a,b,c });
        sum = a + b + c - mx;
        cout << abs(mx - sum) + 1;*/
}
