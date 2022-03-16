#include <bits/stdc++.h>
#include <io.h>

using namespace std;

int a[100];

int main()
{
	io();
	int n, res = -INT_MAX, max = 0, st_index = 0, end_index = 0, tg = 0;
	cin >> n;
	REP(i, 0, n)
	{
		cin >> a[i];
	}
	REP(i, 0, n)
	{
		max += a[i];
		if(res < max){
			res = max;
			st_index = tg;
			end_index = i;
		}
		if (max < 0)
        {
            max = 0;
            tg = i + 1;
        }
	}
	cout << st_index << " - " << end_index << " sum = " << res << endl;
}