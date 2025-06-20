#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        cin>>m;
        vector<vector<int>>v;
        int MAX=0;
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<m;j++){
                int a;
                cin>>a;
                temp.push_back(a);
                MAX=max(MAX,a);
            }
            v.push_back(temp);
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == MAX)
                {
                    count++;
                }
            }
        }
        int cnt1=0;
        int col_max=0;
        int row_max=0;
        vector<pair<int,int>>tar;
        for(int i=0;i<n;i++){
            cnt1=0;
            for(int j=0;j<m;j++){
                if(v[i][j]==MAX){
                    tar.push_back({i,j});
                }
            }
        }
        sort(tar.begin(),tar.end());
        vector<pair<int,int>>v1;
        for(int i=0;i<tar.size()-1;i++){
            if(tar[i].first==tar[i+1].first){
                v1.push_back(tar[i]);
            }
            if(v1.size()>0)
                break;
        }
        sort(tar.begin(), tar.end(), [](pair<int, int> a, pair<int, int> b)
             {
                 return a.second < b.second; // For ascending order
             });
        vector<pair<int,int>>v2;
        for (int i = 0; i < tar.size() - 1; i++)
        {
            if (tar[i].second == tar[i + 1].second)
            {
                v2.push_back(tar[i]);
            }
            if(v2.size()>0)
                break;
        }
        if(tar.size()-(v1.size()+v2.size())<=2){
            cout<<MAX-1<<endl;
        }
        else
            cout<<MAX<<endl;
    }
    return 0;
}