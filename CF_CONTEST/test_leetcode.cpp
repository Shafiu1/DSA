#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v={1,0,2};
    int n=v.size();
    unordered_map<int,int>mpp;
    int ans=n;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            if(mpp[i]==mpp[i-1]){
                ans+=1;
                mpp[i-1]++;
            }
        }
    }
    for(int i=0;i<n;i++); // Your code here
    return 0;
}