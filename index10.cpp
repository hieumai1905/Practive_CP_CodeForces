#include <bits/stdc++.h>
// #include <in-out.h>

using namespace std;

int main()
{
    // in_out();
    string s;
    cin >> s;
    set<char> ch(s.begin(), s.end());
    if (ch.size() & 1)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}