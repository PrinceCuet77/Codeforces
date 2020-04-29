#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int r1, r2, c1, c2, d1, d2;
        while ( scanf("%d %d", &r1, &r2) == 2 ) {
                scanf("%d %d", &c1, &c2);
                scanf("%d %d", &d1, &d2);

                bool flag = false;
                int a, b, c, d;
                for ( int i = 1; i <= 9; i++ ) {
                        a = i;
                        b = r1 - i;
                        c = c1 - i;
                        d = d1 - i;

                        if ( a == b || c == d || a == c || a == d || b == c|| b == d || b > 9 || c > 9 || d > 9 || b <= 0 || c <= 0 || d <= 0 )
                                continue;

                        if ( ((b+c) == d2) && ((b+d) == c2) && ((c+d) == r2) ) {
                                flag = true;
                                break;
                        }
                }

                if ( flag )
                        printf("%d %d\n%d %d\n", a, b, c, d);
                else
                        printf("-1\n");
        }

        return 0;
}
