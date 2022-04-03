#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr)
{
    int p = 0, n = 0, z = 0;
    double m = arr.size();

    for (int i : arr)
    {
        p += i > 0;
        n += i < 0;
        z += i == 0;
    }

    cout << p / m << "\n"
         << n / m << "\n"
         << z / m << "\n";
}

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    plusMinus(arr);

    return 0;
}