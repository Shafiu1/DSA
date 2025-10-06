#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>arr={6,8,0,1,3};
    // stack<int>s;
    // vector<int>ans;
    // for(int i=arr.size()-1;i>=0;i--){
    //     while(!s.empty() && arr[i]>s.top()){
    //         s.pop();
    //     }
    //     if(s.empty()){
    //         ans.push_back(-1);
    //     }else{
    //         ans.push_back(s.top());
    //     }
    //     s.push(arr[i]);
    // }

    // for(int i=ans.size()-1;i>=0;i--){
    //     cout<<ans[i]<<" ";
    // }
    for(auto u:arr){
        cout<<u<<" ";
    }
}