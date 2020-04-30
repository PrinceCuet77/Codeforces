#include <bits/stdc++.h>
using namespace std;

int main()
{
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        int n;
        while ( scanf("%d", &n) == 1 ) {
                for ( int i = 0; i < 3; i++ ) {
                        int a, b;
                        scanf("%d %d", &a, &b);
                        if ( n == a )
                                n = b;
                        else if ( n == b )
                                n = a;
                }

                printf("%d\n", n);
        }

        return 0;
}
