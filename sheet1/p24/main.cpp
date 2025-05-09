#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,c;
   cin>>n;
     unsigned int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n;i++){
    for(int j=0; j<n; j++){
        if((i!=j&&i<j)&&((arr[i]+arr[j])==(arr[0]+arr[n-1])))
           c++;
    }}
    cout<<c<<"\n";
return 0;
}
