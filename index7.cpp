#include <bits/stdc++.h>
#include <in-out.h>

using namespace std;

int main()
{
    in_out();
    string s;
    getline(cin, s);
    vector<int> v;
    for (int i = 0; i < s.size(); i += 2)
    {
        v.push_back((int)s[i] - 48);
    }
    sort(v.begin(), v.end());
    int n = 0;
    for (int i = 0; i < s.size(); i += 2)
    {

        s[i] = (char)v[n++] + 48;
    }
    cout << s << endl;
    return 0;
}