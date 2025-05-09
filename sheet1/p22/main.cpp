#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

struct employee{
int eno;
string ename;
string ejob;
float esalary;
float ebonus=0;
};

void emp(employee arr[],int n);
void bon(employee &e,float present);
void print(employee arr[],int n);

int main()
{
    employee arr[4];
    emp(arr,4);
    bon(arr[1],0.1f);
    print(arr,4);

    return 0;
}

void emp(employee arr[],int n){
    for(int i=0; i<n; i++){
 cout<<"please enter *employee number* *employee name* *employee job*,for  "
          <<i+1<<" employee \n\n";
    cin>>arr[i].eno>>arr[i].ename>>arr[i].ejob;
        if(arr[i].ejob=="manager")
            arr[i].esalary=5000;
            else if(arr[i].ejob=="engineer")
                arr[i].esalary=3000;
            else if(arr[i].ejob=="doctor")
                arr[i].esalary=2000;
            else
                arr[i].esalary=1000;
    }
}

void bon(employee &e,float present){
e.ebonus=e.esalary*present;
}

void print(employee arr[],int n){
for(int i=0; i<n ;i++){
    cout<<"employee number "<<arr[i].eno<<endl;
    cout<<"employee name "<<arr[i].ename<<endl;
    cout<<"employee salary "<<arr[i].esalary<<endl;
    cout<<"employee bonus "<<arr[i].ebonus<<endl;
    cout<<"employee total salary "<<arr[i].esalary+arr[i].ebonus<<endl;
    cout<<"===============================\n";
    }
}

