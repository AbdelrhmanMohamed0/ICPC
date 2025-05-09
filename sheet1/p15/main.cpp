#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char op;
    cin>>a>>op>>b;
    if(op=='<'){
        if(a<b)
            cout<<"Right";
        else
            cout<<"Wrong";
    }
      else if(op=='>'){
        if(a>b)
            cout<<"Right";
        else
            cout<<"Wrong";
    }
      if(op=='='){
        if(a==b)
            cout<<"Right";
        else
            cout<<"Wrong";
    }

    /*
    short a,b;
char c;
cin>>a>>c>>b;
if (c=='>'&&a>b||c=='='&&a==b||c=='<'&&a<b)
    cout<<"Right";

else
    cout<<"Wrong";
    */
    return 0;
}
