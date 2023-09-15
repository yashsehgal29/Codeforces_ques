#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string num_string=to_string(num);
    int str_len=num_string.length();
    int flag=0;
    for(int i=0;i<str_len;i++){
        if(num_string[i]=='4' || num_string[i]=='7'){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
        return 0;
    }
    else if(num%4==0 || num%7==0 || num%47==0){
        cout<<"YES";
        return 0;
    }
    else{
        cout<<"NO";
        return 0;
    }
return 0;

}