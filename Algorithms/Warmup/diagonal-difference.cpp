#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr)
{
    int n = arr.size(), right_diagonal = 0, left_diagonal = 0;

    for (int i = 0; i < n; i++)
        right_diagonal += arr[i][i];

    for (int i = n - 1; i >= 0; i--)
        left_diagonal += arr[i][n - i - 1];

    return abs(right_diagonal - left_diagonal);
}

int main()
{
    int n;

    cin >> n;

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        arr[i].resize(n);

        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int result = diagonalDifference(arr);

    cout << result << "\n";

    return 0;
}