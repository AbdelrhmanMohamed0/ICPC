#include <bits/stdc++.h>
using namespace std;

int main()
{
 unsigned int n,d;
 cin>>n>>d;
 int arr[n],c=0;

 for(int i=0; i<n ;i++)
        cin>>arr[i];
        for(int i=0; i<n;i++){
    for(int j=0; j<n; j++){

        if(arr[i]==arr[j]&&i!=j)
            c++;}}
for(int i=0; i<n;i++){
    for(int j=0; j<n; j++){
   if(abs(arr[i]-arr[j])<=d&&arr[i]!=arr[j])
            c++;
        }
    }

cout<<c<<"\n";

    return 0;
}
