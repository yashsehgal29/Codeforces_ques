#include<bits/stdc++.h>
using namespace std;
int main(){
    long long m,n,a,row,col;
    cin>>n>>m>>a;
    if(m<a && n<a){
        cout<<"1";
    }
    else if(m>=a && n<=a){
        if(m%a==0){
            cout<<m/a;
        }
        else{
            cout<<(m/a)+1;
        }
    }
    else if(m<=a and n>=a){
        if(n%a==0){
            cout<<n/a;
        }
        else{
            cout<<(n/a)+1;
        }
    }
    else if(m>=a && n>=a){
        if(n%a==0){
           row=n/a;
        }
        else{
            row=(n/a)+1;
        }
        if(m%a==0){
            col=m/a;
        }
        else{
            col=(m/a)+1;
        }
        cout<<row*col;
    }
return 0;
}