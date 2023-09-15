#include<bits/stdc++.h>
using namespace std;
int exp1(int a,int b,int c){
    return (a+b+c);
}
int exp2(int a,int b,int c){
    return (a+b)*c;
}
int exp3(int a,int b,int c){
    return a*(b+c);
}
int exp4(int a,int b,int c){
    return a*b*c;
}
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    vector<int>exp;
   int x=exp1(a,b,c);
   int y=exp2(a,b,c);
   int z=exp3(a,b,c);
   int w=exp4(a,b,c);
    exp.push_back(x);
    exp.push_back(y);
    exp.push_back(z);
    exp.push_back(w);
    int max=exp[0];
    for(auto i:exp){
        if(max<=i){
            max=i;
        }
    }
    cout<<max;

return 0;
}