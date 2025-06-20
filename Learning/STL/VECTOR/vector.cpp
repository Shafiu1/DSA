#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
    // vector<int>v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    //     printVec(v);
    // }
    vector<int>v1(10,3);
    printVec(v1);
    v1.pop_back();
    cout<<v1.size();
    vector<int>v2=v1;//making the copy. Not reference.
    printVec(v2);
    return 0;
}