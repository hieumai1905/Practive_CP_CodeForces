#include <bits/stdc++.h>
#include <in-out.h>

using namespace std;

int main()
{
    in_out();
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    strlwr(s1);
    strlwr(s2);
    if (strcmp(s1, s2) == 0)
        cout << 0 << endl;
    else if (strcmp(s1, s2) < 0)
        cout << -1 << endl;
    else
        cout << 1 << endl;
    return 0;
}