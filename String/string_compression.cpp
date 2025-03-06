#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'c', 'c', 'd', 'd'};
    vector<char>str;
    int i=0,j=0;
    int n=chars.size();
    while(i<n && j<n){
        if(chars[i]==chars[j]){
            j++;
        }else{
            if(j-i>1){
                str.push_back(chars[i]);
                string temp=to_string(j-i);
                for(auto u:temp){
                    str.push_back(u);
                }
            }
            else{
                str.push_back(chars[i]);
            }
            i=j;
        }
    }
    if (j - i > 1)
    {
        str.push_back(chars[i]);
        string temp = to_string(j - i);
        for (auto u : temp)
        {
            str.push_back(u);
        }
    }else{
        str.push_back(chars[i]);
    }
    for(auto u:str){
        cout<<u<<" ";
    }
    return 0;
}