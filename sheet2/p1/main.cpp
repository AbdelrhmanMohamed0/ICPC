#include<iostream>
using namespace std;

int main(){
cin.tie(0);
cin.sync_with_stdio(0);
int n,x;
cin>>n;
int array[n];
for(int i=0; i<n;i++)
    cin>>array[i];
for(int i=0; i<n;i++)
    for(int j=0; j<n;j++)
    if(array[i]>array[j]){
    x=array[i];
    array[i]=array[j];
    array[j]=x;
        }
cout<<array[0];
return(0);
}
//or
/*#include<iostream>
using namespace std;
int main(){
int x,z=0,n;
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
if(x>z){
	z=x;
}
}
cout<<z;
}*/
