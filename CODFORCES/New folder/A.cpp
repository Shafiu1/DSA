#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        int s;
        cin>>n>>s;
        vector<int>v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        if(s>=v[0] and s<=v[n-1]){
            cout<<min((v[n-1]-s)+(v[n-1]-v[0]),(s-v[0])+(v[n-1]-v[0]))<<endl;
        }
        else if(s<=v[n-1]){
            cout<<v[n-1]-s<<endl;
        }else
            cout<<s-v[0]<<endl;
    } // Your code here
    return 0;
}