class Solution {
public:
	bool isAnagram(string s, string t) {

		int f[256] = {0};
		int f1[256] = {0};
		for (int i = 0; i < s.length(); i++)
		{
			f[s[i]]++;
		}
		for (int i = 0; i < t.length(); i++)
		{
			f1[t[i]]++;
		}
		int flag = 1;
		for (int i = 0; i < 256; i++)
		{
			if (f[i] > 0 or f1[i] > 0)
				if (f[i] != f1[i])
				{
					flag = 0;
					break;
				}
		}


		if (flag)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};