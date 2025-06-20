#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 4, 2, 5, 48, 34, 23, 11};
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_index=i;
        for (int j = i+1; j < n; j++)
        {
            if (v[j] < v[min_index])
            {
                min_index=j;
            }
        }
        // cout<<v[min_index]<<" ";
        swap(v[i],v[min_index]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}