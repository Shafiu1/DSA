#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n,x;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            if(v[i]==1 and flag==true){
                cout<<"NO"<<endl;
                break;
            }
            if(v[i]==1){
                i=i+x-1;
                flag=true;
            }
            if(i>=n-1)
                cout<<"YES"<<endl;
        }
    }
    return 0;
}