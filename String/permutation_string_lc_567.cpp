#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "ab", s2 = "eidboaoo", substr;
    sort(s1.begin(),s1.end());
    int sz=s1.size();
    for(int i=0;i+sz<=s2.size();i++){
        substr=s2.substr(i,sz);
        sort(substr.begin(),substr.end());
        if(substr==s1){
            cout<<true<<endl;
            return 0;
        }
    }
    cout<<false<<endl;;
    return 0;
}