#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q, op, k, n;
    string ans = "", s;
    stack<string> prev;
    prev.push(ans);
    cin >> q;
    while (q--)
    {
        cin >> op;
        switch (op)
        {
        case 1:
            cin >> s;
            ans += s;
            prev.push(ans);
            break;
        case 2:
            cin >> k;
            n = ans.size();
            ans = ans.substr(0, n - k);
            prev.push(ans);
            break;
        case 3:
            cin >> k;
            cout << ans[k - 1] << "\n";
            break;
        case 4:
            prev.pop();
            ans = prev.top();
            break;
        }
    }
    return 0;
}
