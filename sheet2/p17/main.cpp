#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   cin.tie(0);
    cin.sync_with_stdio(0);
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
       int z=0,c=0;
        cin >>x;
    while(x){
        if(x%2==1)
        z++;
        x=x/2;
    }
    for(int i=0; i<z;i++)
    c+=pow(2,i);
    cout<<c<<"\n";}
    return 0;
}
