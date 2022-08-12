#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char ch[27];
    char random[51];
    int final;
    while (t--) {
        int count;
        cin >> ch;
        cin >> random;
        final = 0;
        for (int i = 1; random[i] = '\0'; i++) {
            for (int j = 1; j <= 26; j++) {
                if (ch[j] == random[i]) {
                    count = 0;
                    count = count + j;
                    final = abs(count - final);
                    break;
                }
            }
        }
        cout << final << endl;
    }
}