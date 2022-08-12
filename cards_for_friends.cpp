#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, t, w, h;
	cin >> t;
	while (t--)
	{
		cin >> w >> h >> n;
		if (n == 1)
		{
			cout << "YES" << endl;
		}

		int i = 1;
		while (i <= n and (w != 1 and h != 1))
		{

			int s;
			if (w % 2 == 0 and h % 2 != 0)
			{
				s = (w / 2) * h;
				w = w / 2;
				i++;
			}
			else if (h % 2 == 0 and w % 2 != 0)
			{
				s = (h / 2) * w;
				h = h / 2;
				i++;
			}
			else if (w % 2 == 0 and h % 2 == 0 )
			{
				s = (w / 2) * h;
				w = w / 2;
				i++;
			}
			else
			{
				i = 0;
				break;
			}
		}
		if (i == 0)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}

	}
}