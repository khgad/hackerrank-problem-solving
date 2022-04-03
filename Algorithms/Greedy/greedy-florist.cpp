#include <bits/stdc++.h>

using namespace std;

int getMinimumCost(int k, vector<int> c)
{

    int total = 0;
    sort(c.begin(), c.end());
    int t = k, p = 0;
    while (!c.empty())
    {
        total += (p + 1) * c.back();
        c.pop_back();
        t--;
        if (t == 0)
            p++, t = k;
    }
    return total;
}

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> c(n);

    for (int &i : c)
        cin >> i;

    int result = getMinimumCost(k, c);

    cout << result << "\n";

    return 0;
}