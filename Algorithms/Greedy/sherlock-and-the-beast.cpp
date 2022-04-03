#include <bits/stdc++.h>

using namespace std;

void decentNumber(int n)
{

    for (int i = 0; i <= n; i += 5)
    {
        if ((n - i) % 3 == 0)
        {
            cout << string((n - i), '5') << string(i, '3') << "\n";
            return;
        }
    }
    cout << "-1"
         << "\n";
}

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;

        decentNumber(n);
    }

    return 0;
}