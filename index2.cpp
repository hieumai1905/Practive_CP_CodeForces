#include <bits/stdc++.h>
#include <in-out.h>

using namespace std;

int i, j, n, k, res, a[51];

int main()
{
    in_out();
    cin >> n >> k;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (j < n)
    {
        if (a[j] && a[j] >= a[k - 1])
            res++;
        j++;
    }
    cout << res << endl;
    return 0;
}