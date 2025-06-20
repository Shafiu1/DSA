#include <bits/stdc++.h>
using namespace std;
vector<int> adj[5];
bool visited[5];

void dfs(int s){
    if(visited[s]){
        return;
    }
    cout<<s<<"->";
    visited[s]=true;
    for(auto u:adj[s]){
        dfs(u);
    }
}
int main() {
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);
    dfs(1);
    return 0;
}