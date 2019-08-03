#include<bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                for ( int i = 0; i < n; i++ ) {
                        string ch;
                        cin >> ch;

                        int len = ch.length();
                        sort(ch.begin(), ch.end());

                        char c = ch[0];
                        bool flag = true;
                        for ( int i = 1; i < len; i++ ) {
                                if ( ch[i] != (char)++c ) {
                                        flag = false;
                                        break;
                                }
                        }

                        flag ? cout << "YES" << endl : cout << "NO" << endl;
                }
        }

        return 0;
}

