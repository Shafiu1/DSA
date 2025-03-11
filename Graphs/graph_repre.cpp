#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>adj[4];
    // adj[0].push_back(10);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);
    for(auto u: adj){
        for(auto v:u){
            cout<<v<<" ";
        }
        cout<<endl;
    }

    //weighted graph
    vector<pair<int,int>>adjWithWeight[10];
    adjWithWeight[1].push_back({2,5});
    adjWithWeight[2].push_back({3,7});
    adjWithWeight[2].push_back({4,6});
    adjWithWeight[3].push_back({4,5});
    adjWithWeight[4].push_back({1,2});
    return 0;
}