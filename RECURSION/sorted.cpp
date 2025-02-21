#include<bits/stdc++.h>
using namespace std;

bool sortedArray(vector<int>&v,int n){
    if(n==1 || n==0){
        return true;
    }
    return v[n-1]>=v[n-2] && sortedArray(v,n-1);
}

int main(){
    vector<int> v={1,3,2,4,5};
    int n=5;
    cout<<sortedArray(v,n);
}