#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<string,int>m;
    m.emplace("tv",100); // Your code here
    m.emplace("tv",100); // Your code here
    m.emplace("tv",100); // Your code here
    m.emplace("tv",100); // Your code here
    cout<<m.size()<<endl;
    unordered_map<string,int>m1;
    m1.emplace("tv",100);
    m1.emplace("tv",100);
    m1.emplace("tv",100);
    m1.emplace("tv",100);
    m1.emplace("tv",100);
    cout<<m1.size();
    return 0;
}