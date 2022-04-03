#include <bits/stdc++.h>

using namespace std;

long aVeryBigSum(vector<long> arr)
{
    long sum = 0;

    for (long i : arr)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int n;

    cin >> n;

    vector<long> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr.at(i);

    long result = aVeryBigSum(arr);

    cout << result << "\n";
    return 0;
}