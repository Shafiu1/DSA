#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<char, int> mpp;
    string s = "NWSE";
    int n=s.size();
    int k = 1;
    int s_cnt = 0;
    int n_cnt = 0;
    int e_cnt = 0;
    int w_cnt = 0;
    int ans = k;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'N')
        {
            n_cnt++;
        }
        else if (s[i] == 'S')
        {
            s_cnt++;
        }
        else if (s[i] == 'W')
        {
            w_cnt++;
        }
        else
        {
            e_cnt++;
        }
        ans = max(ans, min(abs(n_cnt - s_cnt) + abs(w_cnt - e_cnt) + 2*k,i+1));
    }
    cout<<ans<<endl;
    return 0;
}