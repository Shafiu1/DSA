#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "21474836460";
    string final = "";
    int s_size = s.size();
    int sign = 1;
    bool zero_occur = false;
    bool plusminustrav = false;
    int ans = 0;
    for (int i = 0; i < s_size; i++)
    {
        if (s[i] == ' ' && final.size() == 0)
        {
            continue;
        }
        else if (final.size() == 0 && s[i] == '-' && !plusminustrav)
        {
            if (zero_occur)
                break;
            final.push_back('-');
            plusminustrav = true;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            if ((final.size() == 0 || (final.size() == 1 && final[0] == '-')) && s[i] == '0')
            {
                zero_occur = true;
                continue;
            }
            final += s[i];
        }
        else
        {
            if (!plusminustrav && s[i] == '+')
            {
                plusminustrav = true;
                continue;
            }
            break;
        }
    }
    cout<<final<<endl;
    if ((final.size()==to_string(INT_MAX).size()&& final>to_string(INT_MAX)) || final.size() > to_string(INT_MAX).size())
        ans = INT_MAX;
    else if ((final.size() == to_string(INT_MIN).size() && final > to_string(INT_MIN)) && final.size() > to_string(INT_MIN).size())
        ans = INT_MIN;
    else
        ans = atoi(final.c_str());
    cout<<ans;
}