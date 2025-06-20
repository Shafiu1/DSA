#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v={1,4,2,4,5,34,53};
    cout<<*(max_element(v.begin(),v.end()))<<endl;
    cout<<*(min_element(v.begin(),v.end()))<<endl;
    cout<< binary_search(v.begin(),v.end(),34)<<endl;// Your code here
    int n=14;
    long int m=15;
    long long o=16;
    cout<<__builtin_popcount(n)<<endl;
    cout<<__builtin_popcountl(m)<<endl;
    cout<<__builtin_popcountll(o)<<endl;
    return 0;
}