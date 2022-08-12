#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char ch[27];
		cin >> ch;
		char w[51];
		cin >> w;
		int mapping[256] = {0};
		for (int i = 0; ch[i] != '\0'; i++)
		{
			mapping[ch[i]] = i + 1;
		}
		int ans = 0;
		int n = 0;
		for (int i = 0; w[i] != '\0'; i++)
		{
			n++;
		}
		for (int i = 0; i < n - 1; i++)
		{
			ans = ans + abs(mapping[w[i + 1]] - mapping[w[i]]);
		}
		cout << ans << endl;


	}
}