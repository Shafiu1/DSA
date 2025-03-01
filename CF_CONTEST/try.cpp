#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, k, i;
        cin >> n >> x >> k;
        string str;
        cin >> str;

        long long cnt = 0, ans = 0;
        long long position = x;

        for (i = 0; i < n; i++)
        {
            if (str[i] == 'L')
                position--;
            else
                position++;
            cnt++;

            if (position == 0)
            {
                ans++;
                k -= cnt;
                break;
            }
        }

        if (position != 0)
        {
            cout << 0 << endl;
            continue;
        }

        long long cycle_length = 0;
        position = x;

        for (i = 0; i < n; i++)
        {
            if (str[i] == 'L')
                position--;
            else
                position++;
            cycle_length++;

            if (position == 0)
                break;
        }

        if (position == 0)
        {
            ans += (k / cycle_length);
        }

        cout << ans << endl;
    }
    return 0;
}
