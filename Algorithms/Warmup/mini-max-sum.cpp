#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    long sum = 0, n = arr.size();

    for (int i : arr)
        sum += i;

    cout << sum - arr[n - 1] << " " << sum - arr[0] << "\n";
}

int main()
{
    vector<int> arr(5);

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}