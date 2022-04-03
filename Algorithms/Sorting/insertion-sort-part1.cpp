#include <bits/stdc++.h>

using namespace std;

void printArray(int n, vector<int> arr)
{
    cout << arr[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << "\n";
}

void insertionSort1(int n, vector<int> arr)
{
    int j = n - 1;
    int num = arr[j];
    while (j >= 0)
    {
        if (num < arr[j - 1])
        {
            arr[j] = arr[j - 1];
            printArray(n, arr);
            j--;
            arr[j] = num;
        }
        else
        {
            printArray(n, arr);
            break;
        }
    }
}

int main()
{
    int n;

    cin >> n;
    vector<int> arr(n);

    for (int &i : arr)
        cin >> i;

    insertionSort1(n, arr);

    return 0;
}