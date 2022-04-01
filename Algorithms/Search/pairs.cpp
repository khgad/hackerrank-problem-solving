#include <bits/stdc++.h>

using namespace std;

int pairs(int k, vector<int> arr)
{
    sort(arr.begin(), arr.end());

    int i = 0, j = 0, n = arr.size(), cnt = 0;

    while (j < n)
    {
        int diff = arr[j] - arr[i];
        if (diff == k)
        {
            cnt++;
            j++;
        }
        else if (diff < k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    return cnt;
}

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr.at(i);
    }

    int result = pairs(k, arr);

    cout << result << "\n";

    return 0;
}