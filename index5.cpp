#include <bits/stdc++.h>
#include <in-out.h>

using namespace std;

int main()
{
    in_out();
    int indexx, indexy;
    bool kt = false;
    for (int i = 1; i <= 5; i++)
    {
        if (kt)
            break;
        for (int j = 1; j <= 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                indexx = i;
                indexy = j;
                cout << abs(3 - indexx) + abs(3 - indexy) << endl;
                exit(0);
            }
        }
    }
    return 0;
}