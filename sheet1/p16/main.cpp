#include <bits/stdc++.h>
using namespace std;
int main()
{
    short a,b;
    int d,s;
    char op,opp;
    cin>>a>>op>>b>>opp>>d;
    if(op=='+'&&opp=='='){
        s=a+b;
        if(s==d)
            cout<<"Yes";
        else
            cout<<s;
    }

        else if(op=='-'&&opp=='='){
        s=a-b;
        if(s==d)
            cout<<"Yes";
        else
            cout<<s;

    }
      else if(op=='*'&&opp=='='){
        s=a*b;
        if(s==d)
            cout<<"Yes";
        else
            cout<<s;
    }
    return 0;
}
