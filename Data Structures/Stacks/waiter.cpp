#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int getNextPrime(int n)
{
    if (n == 2)
        return 3;
    n += 2;
    while (!isPrime(n))
        n += 2;
    return n;
}

vector<int> waiter(vector<int> number, int q)
{
    int prime = 2;
    stack<int> A1, A2, B;
    vector<int> answer;
    for (int i : number)
        A1.push(i);
    while (q--)
    {
        // cout << prime << endl;
        if (A1.size())
        {
            while (A1.size())
            {
                int num = A1.top();
                A1.pop();
                if (num % prime == 0)
                    B.push(num);
                else
                    A2.push(num);
            }
        }
        else
        {
            while (A2.size())
            {
                int num = A2.top();
                A2.pop();
                if (num % prime == 0)
                    B.push(num);
                else
                    A1.push(num);
            }
        }
        while (B.size())
        {
            answer.push_back(B.top());
            B.pop();
        }
        prime = getNextPrime(prime);
    }
    while (A1.size())
    {
        answer.push_back(A1.top());
        A1.pop();
    }
    while (A2.size())
    {
        answer.push_back(A2.top());
        A2.pop();
    }
    return answer;
}

int main()
{
    int n, q;

    cin >> n >> q;

    vector<int> number(n);

    for (int i = 0; i < n; i++)
    {
        cin >> number.at(i);
    }

    vector<int> result = waiter(number, q);

    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
        {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}