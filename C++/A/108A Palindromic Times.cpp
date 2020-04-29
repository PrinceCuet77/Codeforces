#include <bits/stdc++.h>
using namespace std;

int makeMinute(int h) {
        int t1 = h % 10;
        int v = h / 10;
        int t2 = v % 10;
        return t1 * 10 + t2;
}

int main()
{
        //freopen("file.txt", "r", stdin);
        int h, m;
        while ( scanf("%d:%d", &h, &m) == 2 ) {
                int p = makeMinute(h);

                if ( p <= m ) h++;

                if ( 6 <= h && h <= 9 ) h = 10;
                else if ( 16 <= h && h <= 19 ) h = 20;
                else if ( h == 24 ) h = 0;

                if ( 0 <= h && h <= 5 ) printf("0%d:%d0\n", h, h);
                else if ( (20 <= h && h <= 23) || (10 <= h && h <= 15) || (16 <= h && h <= 19) ) {
                        p = makeMinute(h);

                        if ( 0 <= p && p <= 5 ) printf("%d:0%d\n", h, p);
                        else printf("%d:%d\n", h, p);
                }
        }

        return 0;
}
