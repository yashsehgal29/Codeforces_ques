#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[4]={0};
    while(n--){
        int k;
        cin>>k;
        a[k-1]++;
    }
    int ans=a[3];
   if(a[2]>=a[0]){
    ans+=a[2];
    a[0]=0;
   }
   else{
    ans+=a[2];
    a[0]=a[0]-a[2];
   }
   ans+=a[1]/2;
   a[1]=a[1]%2;
   if(a[0]>=2 && a[1]%2!=0){
    ans+=a[1]%2;
    a[0]=a[0]-2;
   }
   else if(a[0]>=1 && a[1]%2!=0){
         ans+=a[1]%2;
    a[0]=a[0]-1;
   }
   else{
    ans+=a[1]%2;
   }
   if(a[0]%4==0){
    ans+=a[0]/4;
   }
   else{
    ans+=a[0]/4 + 1;
   }

   cout<<ans;
return 0;
}