#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3, 3};
    int n=nums.size();
    unordered_map<int,int>mpp;
    int cs=0,target=6;
    for(int i=0;i<n;i++){
        if(mpp.find(target-nums[i])!=mpp.end()){
            cout<<mpp[target-nums[i]]<<" "<<i<<endl;
        }
        mpp[nums[i]] = i;
    }
    return 0;
}