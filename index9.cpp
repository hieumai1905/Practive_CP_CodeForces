#include <bits/stdc++.h>
// #include <in-out.h>

using namespace std;

int main()
{
    // in_out();
    int n, res = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            res++;
    }
    cout << res << endl;
    return 0;
}