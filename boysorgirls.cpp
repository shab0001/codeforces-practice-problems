#include<bits/stdc++.h>
#define size 100000
using namespace std;
int main()
{
	char ch[size];
	cin >> ch;
	int f[256] = {0}, flag = 0;
	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 65 and ch[i] <= 90)
		{
			f[ch[i] - 65]++;
		}
		else {
			f[ch[i] - 97]++;
		}
	}
	for (int i = 0; i < 256; i++)
	{
		if (f[i] > 0)
		{
			flag++;
		}


	}
	if (flag % 2 != 0)
	{
		cout << "IGNORE HIM!";
	}
	else
	{
		cout << "CHAT WITH HER!";
	}

}