#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'biggerIsGreater' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING w as parameter.
 */

map<char, int> freq_chars;

string biggerIsGreater(string w)
{
    freq_chars.clear();
    freq_chars[w.back()]++;
    string ans = "no answer";
    bool a = false;
    int i = w.size() - 2;
    while (i >= 0)
    {

        char c = w[i] + 1;
        while (c <= 'z')
        {
            if (freq_chars[c])
            {
                freq_chars[w[i]]++;
                freq_chars[c]--;
                w[i] = c;
                a = true;
                break;
            }
            c++;
        }
        if (a)
            break;
        freq_chars[w[i]]++;
        i--;
    }
    if (a == false)
        return ans;
    string temp = "";
    char c = 'a';
    while (c <= 'z')
    {
        if (freq_chars[c])
        {
            temp += c;
            freq_chars[c]--;
        }
        else
        {
            c++;
        }
    }
    w = w.substr(0, i + 1) + temp;
    return w;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string T_temp;
    getline(cin, T_temp);

    int T = stoi(ltrim(rtrim(T_temp)));

    for (int T_itr = 0; T_itr < T; T_itr++)
    {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
