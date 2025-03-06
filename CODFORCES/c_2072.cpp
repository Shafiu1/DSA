#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,temp=0;
        cin>>n>>x;
        temp=x;
        int count=0;
        while (temp != 0)
        {
            if(temp & 1){
                count++;
            }
            else{
                break;
            }
            temp=temp>>1;
        }
        int ans = 0,i=0;
        while (i <= count and i < n - 1)
        {
            cout << i << " ";
            ans=ans|i;
            i++;
        }
        bool flag=true;
        while(i<n and flag){
            ans=ans|i;
            if(ans==x){
                cout<<i<<" ";
            }
        }
        // bool flag=true;
        // for(i=i;i<n;i++){
        //     if(ans|i==x && flag){
        //         ans=ans|i;
        //         cout<<i<<" ";
        //     }else{
        //         flag=false;
        //         cout<<x<<" ";
        //     }
        // }
        // cout<<endl;
    }
    return 0;
}