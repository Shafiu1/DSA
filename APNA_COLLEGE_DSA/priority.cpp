#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int>pq; //largest to smallest
    priority_queue <int, vector<int>, greater<int >> pq;//reverse
    pq.push(5);
    pq.push(3);
    pq.push(10);
    pq.push(4);
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    
    return 0;
}