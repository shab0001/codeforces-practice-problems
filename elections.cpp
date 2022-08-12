#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, i, j, a, b, c, g;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c;
		if (a > b and a > c)
		{
			g = a;
		}
		else
		{
			if (b > c)
			{
				g = b;
			}
			else
			{
				g = c;
			}
		}

		if (a == g)
		{
			if (a > b and a > c)
			{
				cout << "0 ";
			}
			else
			{
				cout << "1 ";
			}
		}
		else
		{
			cout << g - a + 1 << " ";
		}
		if (b == g)
		{
			if (b > a and b > c)
			{
				cout << "0 ";
			}
			else
			{
				cout << "1 ";
			}
		}
		else
		{
			cout << g - b + 1 << " ";
		}
		if (c == g)
		{
			if (c > a and c > b)
			{
				cout << "0 ";
			}
			else
			{
				cout << "1 ";
			}
		}
		else
		{
			cout << g - c + 1 << " ";
		}
		cout << endl;

	}

}
