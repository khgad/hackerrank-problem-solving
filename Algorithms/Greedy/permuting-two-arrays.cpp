#include <bits/stdc++.h>

using namespace std;

string twoArrays(int k, vector<int> A, vector<int> B)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] + B[i] < k)
            return "NO";
    }

    return "YES";
}

int main()
{
    int q, n, k;

    cin >> q;

    while (q--)
    {
        cin >> n >> k;

        vector<int> A(n), B(n);

        for (int i = 0; i < n; i++)
        {
            cin >> A.at(i);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> B.at(i);
        }

        string result = twoArrays(k, A, B);

        cout << result << "\n";
    }

    return 0;
}