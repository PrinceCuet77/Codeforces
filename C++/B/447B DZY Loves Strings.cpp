#include <bits/stdc++.h>
using namespace std;

int main()
{
        freopen("file.txt", "r", stdin);
        string ch;
        while ( cin >> ch ) {
                int n, cnt = 0;
                cin >> n;

                int a[26], k = 1;
                char c = 'a';
                map < char, int > mp;
                for ( int i = 0; i < 26; i++ ) {
                        cin >> a[i];
                        mp[c] = a[i];
                        c++;
                }

                for ( int i = 0; i < ch.length(); i++ ) {
                        cnt += (k * mp[ch[i]]);
                        k++;
                }

                sort(a, a+26, greater < int > ());

                while ( n-- ) {
                        cnt += (k * a[0]);
                        k++;
                }

                cout << cnt << endl;
        }

        return 0;
}
