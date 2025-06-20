#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v1.push_back(a);
            v2.push_back(b);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int min1=v1[0];
        int min2=v2[0];
        int max1=v1[n-1];
        int max2=v2[n-1];
        
    } // Your code here
    return 0;
}