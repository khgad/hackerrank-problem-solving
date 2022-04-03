#include <bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int> s(2, 0);

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            s[0]++;
        else if (b[i] > a[i])
            s[1]++;
    }

    return s;
}

int main()
{
    vector<int> a(3);
    vector<int> b(3);

    for (int i = 0; i < 3; i++)
        cin >> a.at(i);

    for (int i = 0; i < 3; i++)
        cin >> b.at(i);

    auto result = compareTriplets(a, b);

    cout << result[0] << " " << result[1] << "\n";
    return 0;
}