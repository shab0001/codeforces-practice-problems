#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, i, j;
	cin >> t;
	char a[27], w[51];
	int pos[50] = {0}, sum, size;

	while (t--)
	{
		cin >> a;
		cin >> w;
		for (i = 0; w[i] != '\0'; i++)
		{
			for (j = 0; a[j] != '\0'; j++)
			{
				if (a[j] == w[i])
				{
					pos[i] = j + 1;
				}
			}

		}

		size = i - 1;
		sum = 0;
		for (i = 0; i < size; i++)
		{
			if (pos[i + 1] != 0 and pos[i] > 0)
				sum = sum + abs(pos[i + 1] - pos[i]);
		}
		cout << sum << endl;

	}



}
