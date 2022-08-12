#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j;
	cin >> n;
	while (n--)
	{
		char ch[101];
		cin >> ch;
		int count = 0;
		for (i = 0; ch[i] != '\0'; i++)
		{
			count++;
		}
		// cout << count << endl;
		if (count > 10)
		{

			// cout << between << endl;
			cout << ch[0] << count - 2 << ch[count - 1] << endl;

		}
		else
		{
			cout << ch << endl;
		}

	}
}