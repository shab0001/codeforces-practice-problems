#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 and s[i] <= 90)
        {
            s[i] += 32;
        }
        if (t[i] >= 65 and t[i] <= 90)
        {
            t[i] += 32;
        }
    }
    if (s < t)
    {
        cout << -1;
    }
    else if (s > t)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }



}