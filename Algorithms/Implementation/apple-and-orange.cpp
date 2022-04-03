#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{

    int n_a = 0, n_o = 0;
    for (int &apple : apples)
    {
        apple += a;
        if (apple >= s && apple <= t)
            n_a++;
    }
    for (int &orange : oranges)
    {
        orange += b;
        if (orange >= s && orange <= t)
            n_o++;
    }
    cout << n_a << "\n"
         << n_o;
}

int main()
{
    int s, t, a, b, m, n;

    cin >> s >> t >> a >> b >> m >> n;

    vector<int> apples(m), oranges(n);

    for (int &i : apples)
        cin >> i;

    for (int &i : oranges)
        cin >> i;

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}