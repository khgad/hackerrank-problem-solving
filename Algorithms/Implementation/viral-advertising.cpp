#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'viralAdvertising' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int viralAdvertising(int n)
{
    int day = 1, shared = 5, liked = 2, cumulative = 2;
    while (day != n)
    {
        shared = liked * 3;
        liked = shared / 2;
        cumulative += liked;
        day++;
    }
    return cumulative;
}

int main()
{
    int n;
    cin >> n;
    cout << viralAdvertising(n);
    return 0;
}
