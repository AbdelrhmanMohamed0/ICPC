#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3] ,arry[3];
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n;i++){
        arry[i]=arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i)
        cout << arr[i] <<endl;
   cout<<"\n";
       for(int i=0; i<n;i++)
    cout<<arry[i]<<endl;
/*  int a, b , c;
    cin>>a>>b >>c;
    int arr[3]={a, b , c};
    sort(arr , arr+3);
    cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c;
*/
    return 0;
}
