#include <iostream>
using namespace std;
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,a,b;
    long long sum=0;
    cin>>n>>a>>b;
    for(int i=a;i<=b;i++){
        if(i/10==0)
            sum+=i;}
    for(int i=1;i<=n;i++){
    if((i/10)!=0){
            int x=i;
            int sumx=0;
    while(x){
            sumx+=x%10;
            x/=10;
            }
if(sumx>=a&&sumx<=b)
    sum+=i;
                }
    }
    cout<<sum;
    return 0;
}
