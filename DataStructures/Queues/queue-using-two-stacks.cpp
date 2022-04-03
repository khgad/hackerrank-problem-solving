#include <bits/stdc++.h>
using namespace std;

int q, type, x;
stack<int> inputStack, outputStack;

void enqueue(int n)
{
    inputStack.push(n);
}
void dequeue()
{
    if (outputStack.empty())
    {
        while (inputStack.size())
        {
            outputStack.push(inputStack.top());
            inputStack.pop();
        }
    }
    outputStack.pop();
}
int front()
{
    if (outputStack.empty())
    {
        while (inputStack.size())
        {
            outputStack.push(inputStack.top());
            inputStack.pop();
        }
    }
    return outputStack.top();
}

int main()
{

    cin >> q;
    while (q--)
    {
        cin >> type;
        switch (type)
        {
        case 1:
            cin >> x;
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            cout << front() << "\n";
            break;
        default:
            break;
        }
    }
    return 0;
}
