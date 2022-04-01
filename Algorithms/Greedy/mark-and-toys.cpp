#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector<int> prices, int k)
{
    sort(prices.begin(), prices.end());

    int cnt = 0;

    for (int price : prices)
    {
        if (price < k)
        {
            k -= price;
            cnt++;
        }
        else
            break;
    }

    return cnt;
}

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> prices(n);

    for (int i = 0; i < n; i++)
    {
        cin >> prices.at(i);
    }

    int result = maximumToys(prices, k);

    cout << result << "\n";

    return 0;
}