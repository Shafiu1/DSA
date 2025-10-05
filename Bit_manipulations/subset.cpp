#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int k=4;
    for(int b=0; b <(1<<n);b++){
        if(__builtin_popcount(b)==k){
            // cout<<b<<endl;
            for(int i=0;i<32;i++){
                if(b&(1<<i))
                    cout<<i+1<<" ";
            }
            cout << endl;
        }
        
    }
    return 0;
}