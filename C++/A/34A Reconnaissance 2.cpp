#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( scanf("%d", &n) == 1 ) {
                int a[n];
                for ( int i = 0; i < n; i++ )
                        scanf("%d", &a[i]);

                int aa = a[0], b, t = 1e5;
                for ( int i = 1; i < n; i++ ) {
                        if ( t > abs(a[i-1]-a[i]) ) {
                                aa = i;
                                b = i+1;
                                t = min(t, abs(a[i-1]-a[i]));
                        }
                }

                if ( t > abs(a[0]-a[n-1]) ) {
                        aa = 1;
                        b = n;
                }

                printf("%d %d\n", aa, b);
        }

        return 0;
}
