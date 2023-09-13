#include<bits/stdc++.h>
using namespace std;
char to_low(char ch){
   if(ch>='A' && ch <='Z'){
    return ch+32;
   }
   else{
    return ch;
   }
}
int main(){
    string s;
    cin>>s;
    int n=s.length();
    char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0;i<10;i++){
        s.erase(remove(s.begin(),s.end(),vowels[i]),s.end());
    }
   for(int i=0;i<n;i++){
        s[i]=to_low(s[i]);
   }
   string temp ="";
   for(int i=0;i<n;i++){
    if(s[i]=='\0'){
        break;
    }
    temp.push_back('.');
    temp.push_back(s[i]);
    
   }
    cout<<temp;
return 0;
}