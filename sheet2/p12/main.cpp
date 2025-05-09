#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int m,n,z,c,sum=0;
    do{
    cin>>m>>n;
    if(m>0&&n>0){
    z=min(m,n);
    c=max(m,n);
 for(int i=z; i<=c ;i++){
    cout <<i<<" ";
    sum+=i;}
    cout<<"sum ="<<sum<<"\n";
    sum=0;}
    }while(m>0&&n>0);
    return 0;
}
