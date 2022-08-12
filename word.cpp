#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch[100000];
	cin >> ch;
	int f[256] = {0}, a = 0, b = 0;
	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 97 and ch[i] <= 122)
		{
			a++;
		}
		else {
			b++;
		}
	}
	if (a == b or a > b)
	{
		for (int i = 0; ch[i] != '\0'; i++)
		{
			if (ch[i] >= 65 and ch[i] <= 90)
			{
				ch[i] = ch[i] + 32;
			}
		}
	}
	else
	{
		for (int i = 0; ch[i] != '\0'; i++)
		{
			if (ch[i] >= 97 and ch[i] <= 122)
			{
				ch[i] = ch[i] - 32;
			}
		}


	}

	cout << ch;
}