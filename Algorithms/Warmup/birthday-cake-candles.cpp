#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> candles)
{
    sort(candles.begin(), candles.end(), greater<int>());

    int mx = candles[0], cnt = 0;

    for (int i : candles)
    {
        cnt += mx == i;
    }

    return cnt;
}

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < arr.size(); i++)
        cin >> arr[i];

    int result = birthdayCakeCandles(arr);

    cout << result << "\n";

    return 0;
}