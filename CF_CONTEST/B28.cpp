#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=2;
        if(n==1){
            cout<< -1<<endl;
            continue;
        }
        if(n%2){
            int k=n/2+1;
            long long ans=0;
            ans=2*pow(k,2)-k;
            long long sq=sqrt(ans);
            if(sq*sq==ans){
                cout<<-1<<endl;
                continue;
            }
        }
        if (n % 2==0)
        {
            int k=n/2;
            long long ans = 0;
            ans = 2 * pow(k, 2) + k;
            long sq = sqrt(ans);
            if (sq * sq == ans)
            {
                cout << -1 << endl;
                continue;
            }
        }
        while(i<=n){
            cout<<i<<" ";
            i+=2;
        }
        i=1;
        while(i<=n){
            if(i==n || i==n-1)
                cout<<i<<endl;
            else
                cout<<i<<" ";
            i+=2;
        }
    }
    return 0;
}