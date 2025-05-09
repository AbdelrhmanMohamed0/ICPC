#include <iostream>
using namespace std;
void solve(){
 int n,c,a=0;
    cin>>n>>c;
    for(int x=0; x<=n ;x++){
        for(int y=0; y<=n ;y++)
        if((c-x-y)>=0&&(c-x-y)<=n)
            a++;}
        cout<<a;
}
int main()
{
   cin.tie(0);
    cin.sync_with_stdio(0);
   solve();
    return 0;
}
