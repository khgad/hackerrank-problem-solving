#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int min_length = 6;
    bool upper = 1, lower = 1, special = 1, digit = 1;
    for(char c : password){
        if(isupper(c)) upper = 0;
        else if(islower(c)) lower = 0;
        else if(ispunct(c)) special = 0;
        else if(isdigit(c)) digit = 0;
        if((upper + lower + special + digit) == 0) break;
    } 
    int char_must_added = upper+lower+special+digit;
    int ans = char_must_added + n >= 6 ? char_must_added : 6-n;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
