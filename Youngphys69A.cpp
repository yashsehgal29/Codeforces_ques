#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,x,y,z,sum_x=0,sum_y=0,sum_z=0;
    cin>>num;
    vector<vector<int>> vector_arr;
    //input
    for(int i=0;i<num;i++){
        vector<int> v;
        cin>>x>>y>>z;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        vector_arr.push_back(v);
    }
    //vector addition
    for(int i=0;i<num;i++){
        sum_x+=vector_arr[i][0];
        sum_y+=vector_arr[i][1];
        sum_z+=vector_arr[i][2];
    }
    if(sum_x==0 && sum_y==0 && sum_z==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
return 0;
}