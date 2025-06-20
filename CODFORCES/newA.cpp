#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int cum_sum = 0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            v.push_back(num);
        }
        if(n==1){
            cum_sum=v[0];
        }
        else{
            for(int i=0;i<n;i++){
                cum_sum+=v[i];
            }
            cum_sum=cum_sum-n+1;
        }
        cout<<cum_sum<<endl;
        cum_sum=0;
    }
    return 0;
}