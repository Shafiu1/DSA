#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        long long a;
        cin>>n>>k;
        vector<long long>v;
        long long ans=0;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        long long MAX=v[n-1];
        long long MIN=v[0];
        int temp=0;
        for (int i = 1; i < n; i++)
        {
            ans += v[i] - MIN;
        }
        int i=n-1;
        while(v[i]-MIN>k){
            temp+=v[i]-MIN;
            i--;
        }
        if(temp>k+1){
            cout<<"Jerry"<<endl;
        }
        else if(ans%2==0 and n%2==0){
            cout<<"Jerry"<<endl;
        }
        else if(ans%2==1 and n%2==0){
            cout<<"Tom"<<endl;
        }else if(ans%2==0){
            if(MIN%2==0)
                cout<<"Jerry"<<endl;
            else    
                cout<<"Tom"<<endl;
        }else{
            if (MIN % 2 == 0)
                cout << "Tom" << endl;
            else
                cout << "Jerry" << endl;
        }
        

    } // Your code here
    return 0;
}