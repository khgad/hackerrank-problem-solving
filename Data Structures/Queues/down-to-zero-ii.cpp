#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'downToZero' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int MAX = 1e6 + 1;
int q, n;
vector<int> memo(MAX, -1);

void preprocessing()
{
    memo[0] = 0, memo[1] = 1, memo[2] = 2, memo[3] = 3;
    for (int i = 0; i < MAX; i++)
    {
        if (memo[i] == -1 || (memo[i - 1] + 1) < memo[i])
            memo[i] = memo[i - 1] + 1;
        for (int j = 1; j <= i && i * j <= MAX; j++)
        {
            if (memo[i * j] == -1 || (memo[i] + 1) < memo[i * j])
                memo[i * j] = memo[i] + 1;
        }
    }
}

int downToZero(int n)
{
    return memo[n];
}

int main()
{
    preprocessing();

    cin >> q;
    while (q--)
    {
        cin >> n;
        cout << downToZero(n) << "\n";
    }

    return 0;
}
