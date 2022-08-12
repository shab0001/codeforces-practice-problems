#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  i, j, one = 0, zero = 0;
	char a[101];
	cin >> a;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == '0')
		{
			zero++;
		}
		if (a[i] == '1' and zero < 7)
		{
			zero = 0;
		}


		if (a[i] == '1')
		{
			one++;
		}
		if (a[i] == '0' and one < 7)
		{
			one = 0;
		}

	}
	if (one >= 7 or zero >= 7)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

}