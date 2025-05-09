#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
   cin>>n;
   int absulate = abs(n);
   if(n==absulate)
    cout<<"int "<<n;
   else
    cout<<"float "<<absulate<<" "<<(n-(int)n);
   return 0;
}
