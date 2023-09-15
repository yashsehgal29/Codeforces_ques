#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    string h="hello";
    cin>>word;
    int j=0;
    int n=word.length();
    for(int i=0;i<n;i++){
        if(word[i]==h[j]){
            j++;
        }
        if(j==5){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
return 0;
}