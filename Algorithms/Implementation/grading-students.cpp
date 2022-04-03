#include <bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    for (int &i : grades)
    {
        if (i >= 38)
        {
            if ((i + 1) % 5 == 0)
                i += 1;
            else if ((i + 2) % 5 == 0)
                i += 2;
        }
    }
    return grades;
}

int main()
{
    int n;
    cin >> n;
    vector<int> grades(n);

    for (int &i : grades)
        cin >> i;

    auto result = gradingStudents(grades);

    for (int i : result)
        cout << i << "\n";
}