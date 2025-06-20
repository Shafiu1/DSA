#include <bits/stdc++.h>
using namespace std;
#include<stack>
//last in first out(lipo);
int main() {
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    stack<int>s2;
    s2.swap(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<s.size()<<endl;
    cout<<s2.size()<<endl;
    // cout<<s.top()<<endl;
    return 0;
}