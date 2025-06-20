#include <bits/stdc++.h>
using namespace std;
vector<int>adj[7];
bool visited[8];

void dfs(int s)
{
    if (visited[s])
    {
        return;
    }
    cout << s << "->";
    visited[s] = true;
    for (auto u : adj[s])
    {
        dfs(u);
    }
}

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    cout << s << "->";
    visited[s] = true;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(auto u:adj[curr]){
            if (visited[u])
                continue;
            visited[u]=true;
            cout<<u<<"->";
            q.push(u);
        }
    }
}
int main()
{
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[3].push_back(4);
    adj[2].push_back(4);
    adj[2].push_back(5);
    adj[5].push_back(6);
    adj[5].push_back(7);
    // bfs(1);
    dfs(1);
    return 0;
}