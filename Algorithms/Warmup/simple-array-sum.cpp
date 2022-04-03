#include <bits/stdc++.h>

using namespace std;

int simpleArraySum(vector<int> arr)
{
    int sum = 0;

    for (int i : arr)
        sum += i;

    return sum;
}

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr.at(i);
    }

    int result = simpleArraySum(arr);

    cout << result << "\n";
    return 0;
}