#include <iostream>

using namespace std;

int main()
{
    cin.tie(0);
cin.sync_with_stdio(0);
int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++)
    cin>>array[i];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    if(array[i]<array[j])
      swap(array[i],array[j]);
      }
}
for(int i=0; i<n;i++)
    cout<<array[i]<<" ";
    return 0;
}

//or
/*
int n;
	cin>>n;
	int x[n];
	for(int i=0;i<n;i++)
		cin>>x[i];
		sort(x,x + n);
	for(int i=0;i<n;i++)
		cout<<x[i]<<" ";
*/
