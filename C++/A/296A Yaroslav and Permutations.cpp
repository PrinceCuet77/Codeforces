#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( scanf("%d", &n) == 1 ) {
                map < int, int > mp;

                for ( int i = 0; i < n; i++ ) {
                        int t;
                        scanf("%d", &t);
                        mp[t]++;
                }

                bool flag = true;
                for ( auto x : mp ) {
                        if ( x.second > (n+1)/2 ) {
                                flag = false;
                                break;
                        }
                }

                if ( flag )
                        printf("YES\n");
                else
                        printf("NO\n");
        }

        return 0;
}
