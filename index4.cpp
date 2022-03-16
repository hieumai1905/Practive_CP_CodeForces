#include <bits/stdc++.h>
#include <in-out.h>

using namespace std;

int main()
{
    in_out();
    int n, res = 0;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
            res++;
        else
            res--;
    }
    cout << res << endl;
    return 0;
}