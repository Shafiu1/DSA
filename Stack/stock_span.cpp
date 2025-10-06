#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> stock = {10, 4, 5, 90, 120, 80};
    vector<int>ans;
    stack<int>s;
    for(int i=0;i<stock.size();i++){
        while(!s.empty() && stock[i]>=stock[s.top()]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(i+1);
        }else{
            ans.push_back(i-s.top());
        }
        s.push(i);
    }
    for(auto u:ans){
        cout<<u<<" ";
    }
    return 0;
}