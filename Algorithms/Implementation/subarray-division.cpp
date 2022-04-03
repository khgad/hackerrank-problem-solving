#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m)
{
    int n = s.size();
    if (m > n)
        return 0;
    int i = 0, j = m - 1, sum = 0, cnt = 0;
    while (i <= j)
        sum += s[i++];
    if (sum == d)
        cnt++;
    i = 1, j = m;
    while (j < n)
    {
        sum -= s[i - 1];
        sum += s[j];
        if (sum == d)
            cnt++;
        i++, j++;
    }
    return cnt;
}

int main()
{
    int n, d, m;

    cin >> n;

    vector<int> s(n);

    for (int &i : s)
        cin >> i;

    cin >> d >> m;

    int result = birthday(s, d, m);

    cout << result << "\n";

    return 0;
}