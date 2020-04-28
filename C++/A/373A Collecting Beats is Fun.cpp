#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( scanf("%d", &n) == 1 ) {
                map < int, int > mp;

                for ( int i = 0; i < 4; i++ ) {
                        for ( int j = 0; j < 4; j++ ) {
                                char ch;
                                cin >> ch;
                                if ( ch != '.' )
                                        mp[ch-'0']++;
                        }
                }

                bool flag = false;
                for ( auto x : mp ) {
                        if ( x.second > 2 * n ) {
                                flag = true;
                                break;
                        }
                }

                if ( flag )
                        printf("NO\n");
                else
                        printf("YES\n");
        }

        return 0;
}
