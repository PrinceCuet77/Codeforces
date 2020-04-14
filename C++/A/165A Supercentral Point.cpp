#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( scanf("%d", &n) == 1 ) {
                int x[n+1], y[n+1];
                for ( int i = 0; i < n; i++ )
                        scanf("%d %d", &x[i], &y[i]);

                int cnt = 0;
                for ( int i = 0; i < n; i++ ) {
                        bool up = false, down = false, left = false, right = false;
                        for ( int j = 0; j < n; j++ ) {
                                if ( x[i] == x[j] && y[i] == y[j] )
                                        continue;
                                if ( x[i] == x[j] ) {
                                        if ( y[i] > y[j] && down == false )
                                                down = true;
                                        if ( y[i] < y[j] && up == false )
                                                up = true;
                                }
                                if ( y[i] == y[j] ) {
                                        if ( x[i] > x[j] && left == false )
                                                left = true;
                                        if ( x[i] < x[j] && right == false )
                                                right = true;
                                }
                        }
                        if ( left && right && up && down )
                                cnt++;
                }

                printf("%d\n", cnt);
        }

        return 0;
}
