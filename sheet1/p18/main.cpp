
#include <bits/stdc++.h>
using namespace std;
int main()
{

    unsigned int n,x,y,z;
    cin >> n >> x >> y >> z;
    cout<<(n%100)<<endl;

int v = ((n%100)*(x%100)*(y%100)*(z%100))%100;

if(v < 10) cout << 0 << v << "\n";

else cout << v << "\n";
    return 0;
}
