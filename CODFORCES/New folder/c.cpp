#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        vector<int> rowMax(n, 0), colMax(m, 0);
        int globalMax = 0, secondMax = 0;

        // Read matrix and compute rowMax, colMax, and globalMax
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                rowMax[i] = max(rowMax[i], a[i][j]);
                colMax[j] = max(colMax[j], a[i][j]);
                globalMax = max(globalMax, a[i][j]);
            }
        }

        // Find second maximum
        vector<int> allValues;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                allValues.push_back(a[i][j]);
            }
        }
        sort(allValues.begin(), allValues.end(), greater<int>());
        secondMax = (allValues.size() > 1 && allValues[0] > allValues[1]) ? allValues[1] : 0;

        int ans = globalMax - 1; // Default case if globalMax is decreased
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < m; c++)
            {
                int newMax = secondMax; // Start with secondMax as a baseline
                // Check if globalMax is in row r or column c
                bool maxInRow = false, maxInCol = false;
                for (int j = 0; j < m; j++)
                {
                    if (a[r][j] == globalMax)
                        maxInRow = true;
                }
                for (int i = 0; i < n; i++)
                {
                    if (a[i][c] == globalMax)
                        maxInCol = true;
                }
                if (maxInRow || maxInCol)
                {
                    newMax = max(newMax, globalMax - 1);
                }
                // Update newMax with unaffected row or column maxima
                for (int i = 0; i < n; i++)
                {
                    if (i != r)
                        newMax = max(newMax, rowMax[i] - (i == r ? 0 : (a[i][c] == globalMax && maxInCol ? 1 : 0)));
                }
                for (int j = 0; j < m; j++)
                {
                    if (j != c)
                        newMax = max(newMax, colMax[j] - (j == c ? 0 : (a[r][j] == globalMax && maxInRow ? 1 : 0)));
                }
                ans = min(ans, newMax);
            }
        }

        cout << ans << "\n";
    }
    return 0;
}