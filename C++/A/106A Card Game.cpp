#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        char ch;
        char c[] = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
        while ( cin >> ch ) {
                string s1, s2;
                cin >> s1 >> s2;

                int t1, t2;
                for ( int i = 0; i < 10; i++ ) {
                        if ( c[i] == s1[0] ) {
                                t1 = i;
                                break;
                        }
                }

                for ( int i = 0; i < 10; i++ ) {
                        if ( c[i] == s2[0] ) {
                                t2 = i;
                                break;
                        }
                }

                if ( (t1 > t2 && s1[1] == s2[1]) || (s1[1] == ch && s2[1] != ch) )
                        printf("YES\n");
                else
                        printf("NO\n");
        }

        return 0;
}
