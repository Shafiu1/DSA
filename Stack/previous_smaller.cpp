#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,6,2};
    stack<int>s;
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);
        }else{
            ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    return ans;
}