#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v={1,4,2,5,48,34,23,11};
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}