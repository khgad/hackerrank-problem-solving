#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'findDigits' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int findDigits(int n)
{
    int num = n, digit, cnt = 0;
    while (num)
    {
        digit = num % 10;
        num /= 10;
        if (digit != 0 && n % digit == 0)
            cnt++;
    }
    return cnt;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int result = findDigits(n);
        cout << result << "\n";
    }
    return 0;
}
