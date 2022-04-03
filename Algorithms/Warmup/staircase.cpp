#include <bits/stdc++.h>

using namespace std;

void staircase(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << string(n - i, ' ') << string(i, '#') << "\n";
    }
}

int main()
{
    int n;

    cin >> n;

    staircase(n);

    return 0;
}