#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n, k, i, j, num = 1;
	cin >> n >> k;
	n = n / 2;
	if (k <= n) {
		i = 1;
		while (i <= k)
		{
			num = num + 2;
			if (i == k)
			{
				cout << num;
			}
		}

	}
	else {
		num = 2;
		i = 1;
		while (i <= k)
		{
			num = num + 2;
			if (i == k)
			{
				cout << num;
			}
		}
	}


}