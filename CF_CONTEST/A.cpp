#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=((n/15)+1)*3;
        int remin=(n%15);
        if(remin<=2){
            ans=ans-(3-remin)+1;
        }
        cout << ans << endl;
    }
    return 0;
}