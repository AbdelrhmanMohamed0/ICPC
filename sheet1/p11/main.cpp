#include <bits/stdc++.h>
using namespace std;
int main()
{
unsigned int n;
int i=0,x=0;
cin>>n;
while(n>=365){
    n-=365;
    i++;
}
cout<<i<<" years"<<endl;
while(n>=30){
    n-=30;
    x++;
}
cout<<x<<" months"<<endl;
cout<<n<<" days";
    return 0;


    /*
    int n;
	cin>>n;
	cout<<n/365<<" years\n"
	<<(n%365)/30<<" months\n"
	<<((n%365)%30)<<" days";
	*/
}
