#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int cnt = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            cnt += (ar[j] + ar[i]) % k == 0;
        }
    }
    return cnt;
}

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> ar(n);

    for (int &i : ar)
        cin >> i;

    int result = divisibleSumPairs(n, k, ar);

    cout << result << "\n";

    return 0;
}