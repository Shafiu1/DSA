#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=29,k=1;
    string s="0";
    // s=solve(n,s); 
    for(int j=2;j<=n;j++){
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                temp+="01";
            }else{
                temp+="10";
            }
        }
        s=temp;
    }
    cout<<s<<endl;// Your code here
    return 0;
}