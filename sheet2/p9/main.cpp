#include <iostream>

using namespace std;

int main()
{
   cin.tie(0);
    cin.sync_with_stdio(0);
    short s,x,j=0;
    char op;
    cin>>op>>s;
    if(op=='+'){
         int array[s]={0};
         for(int i=0; i<s; i++)
            cin>>array[i];
            for(int i=0; i<s;i++){
                int z=0;
              while(z!=array[j]){
                cout<<'+';
              z++;}
              cout<<"\n";
              j++;
            }
        }

    else if(op=='-'){
        int array[s]={0};
         for(int i=0; i<s; i++)
            cin>>array[i];
            for(int i=0; i<s;i++){
                int z=0;
              while(z!=array[j]){
                cout<<'-';
              z++;}
              cout<<"\n";
              j++;
            }
    }
   else if(op=='*'){
        int array[s]={0};
         for(int i=0; i<s; i++)
            cin>>array[i];
            for(int i=0; i<s;i++){
                int z=0;
              while(z!=array[j]){
                cout<<'*';
              z++;}
              cout<<"\n";
              j++;
            }
   }
    else if(op=='/'){
        int array[s]={0};
         for(int i=0; i<s; i++)
            cin>>array[i];
            for(int i=0; i<s;i++){
                int z=0;
              while(z!=array[j]){
                cout<<'/';
              z++;}
              cout<<"\n";
              j++;
            }
    }
    return 0;
}
//or
/*
   int main() {
char s;
int n, x;
cin>>s;
cin>>n;
for(int i=0;i<n;i++){
	cin>>x;
	for(int j=1;j<=x;j++){
		cout<<s;
	}cout<<"\n";
}
}
*/
