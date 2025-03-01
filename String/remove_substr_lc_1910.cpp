#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "daabcbaabcbc";
    string part = "abc";
    int sz=part.size();
    while(str.find(part)!=-1){//return -1 if not present otherwise index;
        int pos=str.find(part);
        str.erase(pos,sz);//remove an particular string from a mother string by position and length..
    }
    cout<<str<<endl;
    return 0;
}