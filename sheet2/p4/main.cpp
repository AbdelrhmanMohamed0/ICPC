#include <iostream>

using namespace std;

int main(void)
{
  cin.tie(0);
cin.sync_with_stdio(0);
int n,x=0;
   int i,y=0;
cin>>n;

    for(i=1;i<=n;i++)
   {
       if(n%i==0){
            x++;
            if(x>2){
        cout<<"NO";
        y=1;
        break;
                   }
                }
}
 if(y==0&&n!=1)
     cout<<"YES";
 if(n==1)
        cout<<"NO";
 return 0;
  }
//or
/*
int i;
for(i=2;i<=x;i++){
	if(x%i==0)break;
}if(i==x)cout<<"YES";
else cout<<"NO";
*/
