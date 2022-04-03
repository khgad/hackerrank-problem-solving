#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    int n = s.size();
    bool night = s.substr(8) == "PM";
    int h = stoi(s.substr(0, 2));
    string time = s.substr(2, 6);

    if (night)
    {
        if (h == 12)
        {
            return s.substr(0, 8);
        }
        h += 12;
        return to_string(h) + time;
    }
    else
    {
        if (h == 12)
        {
            return "00" + time;
        }
        return s.substr(0, 8);
    }
}

int main()
{
    string s;

    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}
