#include <bits/stdc++.h>
using namespace std;

char kthCharacter(int k,string s){
    string temp=s;
    for(int i=0;i<temp.size();i++){
        temp[i]=temp[i]+1;
    }
    if(k>s.size()){
        return kthCharacter(k, s + temp);
    }
    return s[k-1];
}
int main() {
    cout<<kthCharacter(10,"a")<<endl;
    return 0;
}