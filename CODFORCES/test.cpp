#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=15;
    while(n!=0){
        cout<<(n&1);
        n=n>>1;
    } // Your code here
    return 0;
}