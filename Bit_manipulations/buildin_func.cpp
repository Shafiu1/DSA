#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=6;
    cout<< __builtin_clz(x)<<endl;
    cout<< __builtin_ctz(x)<<endl;
    cout<< __builtin_popcount(x)<<endl;
    cout<< __builtin_parity(x)<<endl;
    return 0;
}