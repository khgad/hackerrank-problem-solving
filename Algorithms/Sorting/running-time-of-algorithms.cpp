#include <bits/stdc++.h>

using namespace std;

int runningTime(vector<int> arr)
{
    int n = arr.size(), i = 1, shifts = 0;
    while (i < n)
    {
        int j = i - 1, k = i;
        while (arr[j] > arr[k])
        {
            int temp = arr[k];
            arr[k] = arr[j];
            arr[j] = temp;
            j--, k--;
            shifts++;
        }
        i++;
    }
    return shifts;
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

    int result = runningTime(arr);

    cout << result << "\n";

    return 0;
}