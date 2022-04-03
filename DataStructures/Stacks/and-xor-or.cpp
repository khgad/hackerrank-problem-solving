#include <bits/stdc++.h>

using namespace std;

/*
    We need to find max of (((X & Y) ^ (X | Y)) & (X ^ Y))
    to simplify the operation:
    Since (X ^ Y) = (X & Y) ^ (X | Y)
    So (((X & Y) ^ (X | Y)) & (X ^ Y)) = ((X ^ Y) & (X ^ Y))
    And Idempotent laws say that X & X = X
    Therefore ((X ^ Y) & (X ^ Y)) = (X ^ Y)
    So finally we need to find max of (X ^ Y)
*/

int andXorOr(vector<int> a)
{
    stack<int> s;
    int mx = -1, top;
    for (int i : a)
    {
        while (!s.empty())
        {
            top = s.top();
            mx = max(mx, (i ^ top));
            if (top > i)
                s.pop();
            else
                break;
        }
        s.push(i);
    }
    return mx;
}

int main()
{
    int n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    int result = andXorOr(a);

    cout << result << "\n";

    return 0;
}