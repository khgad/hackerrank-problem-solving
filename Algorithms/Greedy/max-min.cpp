#include <bits/stdc++.h>

using namespace std;

int maxMin(int k, vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int i = 0, j = k - 1, s_i, s_j, min_unfair = 1e9;
    while (j < arr.size())
    {
        int diff = arr[j] - arr[i];
        if (diff < min_unfair)
        {
            s_i = i, s_j = j;
            min_unfair = diff;
        }
        i++, j++;
    }
    return min_unfair;
}

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> arr(n);

    for (int &i : arr)
        cin >> i;

    int result = maxMin(k, arr);

    cout << result << "\n";

    return 0;
}