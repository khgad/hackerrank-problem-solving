#include <bits/stdc++.h>

using namespace std;

long memo[51][251];
vector<long> c;

long dp(int id, int n)
{
    if (n == 0)
        return 1l;
    if (n < 0 || id == c.size())
        return 0l;
    long &ans = memo[id][n];
    if (ans != -1)
        return ans;
    return ans = dp(id + 1, n) + dp(id, n - c[id]);
}

long getWays(int n)
{
    memset(memo, -1, sizeof memo);
    return dp(0, n);
}

int main()
{
    int n, m;

    cin >> n >> m;

    c.resize(m);

    for (long &i : c)
    {
        cin >> i;
    }

    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'

    long ways = getWays(n);

    cout << ways << "\n";

    return 0;
}