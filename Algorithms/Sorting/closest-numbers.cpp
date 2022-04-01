#include <bits/stdc++.h>

using namespace std;

vector<int> closestNumbers(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int i = 1, n = arr.size(), mn = INT32_MAX;
    map<int, vector<int>> freq;
    while (i < n)
    {
        int diff = arr[i] - arr[i - 1];
        freq[diff].push_back(arr[i - 1]);
        mn = min(mn, diff);
        i++;
    }
    vector<int> ans;
    int j = 0, m = freq[mn].size();
    while (j < m)
    {
        int num = freq[mn][j];
        ans.push_back(num);
        ans.push_back(num + mn);
        j++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = closestNumbers(arr);

    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
        {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}