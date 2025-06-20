#include <bits/stdc++.h>
using namespace std;
unordered_map<int,bool>mpp;
unordered_map<int, int> nextPrime;
vector<int>prime;
void sieve(int n){
    mpp[0]=mpp[1]=1;
    for(int i=4;i<=n;i+=2){
        mpp[i]=1;
    }
    for(int i=3;i*i<=n;i+=2){
        if(!mpp[i])
        for(int j=i*i;j<=n;j+=i){
            {
                mpp[j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(!mpp[i])
            prime.push_back(i);
    }
    int j=0;
    for(int i=1;i<=n and j<prime.size();i++){
        if(!mpp[i]){
            nextPrime[i]=prime[j];
            j++;
        }else{
            nextPrime[i]=prime[j];
        }
    }
}
int main() {
    int lim=100010;
    sieve(lim);
    vector<vector<int>>input;
    int n,m;
    cin>>n>>m;
    input.resize(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            input[i].push_back(a);
        }
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=0;j<m;j++){
            if(!mpp[input[i][j]])
                continue;
            else{
                temp+=nextPrime[input[i][j]]-input[i][j];
            }
        }
        ans=min(ans,temp);
    }
    for (int i = 0; i < m; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (!mpp[input[j][i]])
                continue;
            else
            {
                temp += nextPrime[input[j][i]] - input[j][i];
            }
        }
        ans = min(ans, temp);
    }
    cout<<ans<<endl;
    return 0;
}