#include <bits/stdc++.h>
using namespace std;
//first solve the single element (include or exclude)

void printSubset(vector<int>&v,vector<int>&ans,int i){
    if(i==v.size()){
        for(int j=0;j<ans.size();j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
        return;
    }
    //Include
    ans.push_back(v[i]);
    printSubset(v,ans,i+1);
    //Exclude
    ans.pop_back();
    printSubset(v,ans,i+1);

}
int main() {
    vector<int>v={1,2,3};
    vector<int>ans;
    printSubset(v,ans,0);
    return 0;
}

// O(N)=O(2^n*n);