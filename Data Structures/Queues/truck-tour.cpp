#include <bits/stdc++.h>

using namespace std;

typedef struct
{
    int patrol;
    int nextDistance;
} petrolPump;

int n;
queue<petrolPump> petrols;

int truckTour()
{
    int idx = 0, finished = 0, amount = 0;
    while (finished < n)
    {
        petrolPump p = petrols.front();
        petrols.pop();
        amount += p.patrol;
        if (amount >= p.nextDistance)
        {
            amount -= p.nextDistance;
            finished++;
        }
        else
        {
            idx += finished + 1;
            finished = 0, amount = 0;
        }
        petrols.push(p);
    }
    return idx;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        petrolPump p;
        cin >> p.patrol >> p.nextDistance;
        petrols.push(p);
    }
    int ans = truckTour();
    cout << ans << "\n";
}