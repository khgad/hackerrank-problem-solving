#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'angryProfessor' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY a
 */

string angryProfessor(int k, vector<int> a)
{
    int early = 0;
    for (int time : a)
        early += time <= 0;
    return early < k ? "YES" : "NO";
}

int main()
{
    int q, n, k, x;
    cin >> q;
    while (q--)
    {
        vector<int> input;
        cin >> n >> k;
        while (n--)
        {
            cin >> x;
            input.push_back(x);
        }
        string result = angryProfessor(k, input);
        cout << result << "\n";
    }
}
