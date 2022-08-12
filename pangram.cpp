#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, flag = 1;
	cin >> n;
	char ch[n];
	cin >> ch;
	int f[26] = {0};
	for (int i = 0; i < n; i++)
	{
		if (ch[i] >= 65 and ch[i] <= 90)
		{
			f[ch[i] - 65]++;
		}
		else
		{
			f[ch[i] - 97]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (f[i] == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

}