#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
      cin.tie(0);
    cin.sync_with_stdio(0);
int a,b,c=0;
int x[100000]={0};
cin>>a>>b;
x[4]=1;
x[7]=1;
x[44]=1;
x[47]=1;
x[74]=1;
x[77]=1;
x[444]=1;
x[447]=1;
x[474]=1;
x[477]=1;
x[774]=1;
x[777]=1;
x[747]=1;
x[744]=1;
x[4747]=1;
x[4444]=1;
x[4447]=1;
x[4474]=1;
x[4477]=1;
x[4744]=1;
x[4774]=1;
x[4777]=1;
x[7474]=1;
x[7777]=1;
x[7774]=1;
x[7747]=1;
x[7744]=1;
x[7444]=1;
x[7477]=1;
x[7447]=1;
for(int i=a;i<=b;i++){
    if(x[i]==1){
        cout <<i<<" ";
    c=1;}

}
if(c==0)
    cout<<"-1";

    return 0;




}
