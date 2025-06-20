#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        long long ans1=0,ans2=0,rem1=0,rem2=0,ans=0;
        if(k>=a){
            ans1=(k-a)/x+1;
            rem1=k-ans1*x;
            if(rem1>=b){
                ans1+=(rem1-b)/y+1;
            }
            if(k>=b){
                ans2 = (k - b) / y + 1;
                rem2 = k - ans2 *y;
                if (rem2 >= a)
                {
                    ans2 += (rem2 - a) / x + 1;
                }
            }
            ans=max(ans1,ans2);
        }
        ans1=0;
        ans2=0;
        rem1=0;
        rem2=0;
        if (k >= b)
        {
            ans1 = (k - b) / y + 1;
            rem1 = k - ans1 * y;
            if (rem1 >= a)
            {
                ans1 += (rem1 - a) / x + 1;
            }
            if (k >= a)
            {
                ans2 = (k - a) / x + 1;
                rem2 = k - ans2 * x;
                if (rem2 >= b)
                {
                    ans2 += (rem2 - b) / y + 1;
                }
            }
            ans = max(ans,max(ans1, ans2));
        }
        cout<<ans<<endl;
    } // Your code here
    return 0;
}