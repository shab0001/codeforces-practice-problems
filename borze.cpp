#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch[201];
	cin >> ch;
	for (int i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] == '.')
		{
			cout << "0";
		}
		if (ch[i] == '-' and ch[i + 1] == '.')
		{
			cout << "1";
			i++;
		}
		if (ch[i] == '-' and ch[i + 1] == '-')
		{
			cout << "2";
			i++;
		}
	}
}