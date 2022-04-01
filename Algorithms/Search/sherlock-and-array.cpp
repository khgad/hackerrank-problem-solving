#include <bits/stdc++.h>

using namespace std;

string balancedSums(vector<int> arr)
{
    int left = 0, total = 0;
    for (auto i : arr)
        total += i;
    for (auto i : arr)
    {
        if (left * 2 == total - i)
            return "YES";
        left += i;
    }
    return "NO";
}

int main()
{
    int t, n;

    cin >> t;
    while (t--)
    {
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr.at(i);
        }

        string result = balancedSums(arr);

        cout << result << "\n";
    }

    return 0;
}