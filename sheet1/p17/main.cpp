#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int  l1,r1,l2,r2;
 cin>>l1>>r1>>l2>>r2;
if(min(r1, r2)>=max(l2, l1))
        cout << max(l2, l1) << ' ' << min(r1, r2) << endl;
  else
    cout<<"-1";
    /*if( l2>r1||l1>r2)
	cout<<-1;
	else
	cout<<max(l1,l2)<<" "<<min(r1,r2);*/
	cout<<
return 0;
}
