#include <bits/stdc++.h>

using namespace std;

vector<int> reverseArray(vector<int> a)
{
    reverse(a.begin(), a.end());
    return a;
}

int main()
{
    int n;

    cin >> n;

    vector<int> a(n);

    for (int &i : a)
        cin >> i;

    auto result = reverseArray(a);

    for (int i : result)
        cout << i << " ";
    cout << "\n";
    return 0;
}