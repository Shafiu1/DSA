#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3, 1, 3, 4, 2};
    int k=0;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int min = nums[0];
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] - min > k)
        {
            cnt++;
            min = nums[i];
        }
    }
    cout<< cnt; // Your code here
    return 0;
}