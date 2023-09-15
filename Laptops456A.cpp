#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    map<long long,long long>map1;
    long long p,q;
    vector<long long>price;
    int flag=0;
    
   for(long long i=0;i<n;i++){
        cin>>p>>q;
        map1[p]=q;
        price.push_back(p);
   }
   sort(price.begin(),price.end());
   for(long long i=0;i<n-1;i++){
        if(map1[price[i]]>map1[price[i+1]]){
            flag=1;
            cout<<"Happy Alex";
            return 0;
        }
        else{
            flag=0;
        }
    }
   cout<<"Poor Alex";
    
return 0;
}