#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n, x, k,i;
        cin >> n >> x >> k;
        string str;
        cin>>str;
        long long cnt=0;
        long long ans=0;
        for(i=0;i<n;i++){
            cnt++;
            if(str[i]=='L')
                x--;
            else
                x++;
            if(x==0){
                ans++;
                break;
            }
        }
        k-=cnt;
        cnt=0;
        bool check=false;
        for(i=0;i<n && i<k && ans!=0;i++){
            cnt++;
            if(str[i]=='L')
                x--;
            else
                x++;
            if(x==0)
            {
                check=true;
                break;
            }
        }
        if(check){
            ans+=k/cnt;
        }
        cout<<ans<<endl;
    }
    return 0;
}