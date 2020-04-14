#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        string s, t;
        while ( cin >> s >> t ) {
                int pos = 0;
                for ( int i = 0; i < t.size(); i++ ) {
                        if ( t[i] == s[pos] )
                                pos++;
                }

                printf("%d\n", pos+1);
        }

        return 0;
}
