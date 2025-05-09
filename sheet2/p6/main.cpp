#include <iostream>
int rev (int x);
using namespace std;

int main()
{
    cin.tie(0);
cin.sync_with_stdio(0);
int n,z;
cin>>n;
int array[n];
for( int i=n; i>=2 ;i--){
  z=rev(i);
  array[i]=z;
}
for(int j=2; j<=n ;j++){
    if(array[j]!=0)
    cout<<array[j]<<" ";}
 return 0;
}
int rev (int x){
    int i;
for( i=2;i<=x;i++){
	if(x%i==0)break;
}if(i==x)
return(x);
else
    return(0);
}
//or
/*
int n ,j;
cin>>n;
for(int i=2;i<=n;i++){
	int f=0;
	for(j=2;j<i;j++){
		if(i%j==0)f++;
	}if(f==0)cout<<i<<" ";
}
*/
