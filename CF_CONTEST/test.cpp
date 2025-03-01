#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long  n;
        cin >> n;
        long long  i = 2;
        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        if (n % 2)
        {
            long long  k = n / 2 + 1;
            long long ans = 2 * 1LL * k * k - k;
            long long sq = sqrt(ans);
            if (sq * sq == ans)
            {
                cout << -1 << endl;
                continue;
            }
        }
        if (n % 2 == 0)
        {
            long long k = n / 2;
            long long ans = 2 * 1LL * k * k + k;
            long long sq = sqrt(ans);
            if (sq * sq == ans)
            {
                cout << -1 << endl;
                continue;
            }
        }
        while (i <= n)
        {
            cout << i << " ";
            i += 2;
        }
        i = 1;
        while (i <= n)
        {
            if (i == n || i == n - 1)
                cout << i << endl;
            else
                cout << i << " ";
            i += 2;
        }
    }
    return 0;
}
