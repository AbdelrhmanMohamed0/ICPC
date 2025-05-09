#include <bits/stdc++.h>
using namespace std;
int main()
{
        cin.tie(0);
    cin.sync_with_stdio(0);
int n,z;
string x;
cin>>n;
for(int i=0;i<n;i++){
	cin>>x;
	reverse(x.begin(),x.end());
	z=x.size();
	for(int i=0; i<z; i++){
	cout<<x[i]<<" ";}
	cout<<"\n";
}
    return 0;
}
//or
/*
int main(){
long long x,n;
cin>>x;
while(x--){
cin>>n;
if(n==0)cout<<0;
while(n>0){
cout<<n%10<<" ";
n=n/10;
}
cout<<"\n";
}
}

*/
