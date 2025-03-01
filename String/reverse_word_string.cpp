#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="the sky is blue";
    reverse(s.begin(),s.end());
    vector<string>v;
    for(int i=0;i<s.size();i++){
        string str="";
        while(i<s.size() && s[i]!=' '){
            str+=s[i];
            i++;
        }
        if(str.size()!=0){
            reverse(str.begin(),str.end());
            v.push_back(str);
        }
    }
    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;
    return 0;
}