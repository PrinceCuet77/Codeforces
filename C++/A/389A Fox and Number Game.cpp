#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( scanf("%d", &n) == 1 ) {
                int a;
                scanf("%d", &a);

                int ans;
                for ( int i = 0; i < n-1; i++ ) {
                        int b;
                        scanf("%d", &b);
                        ans = __gcd(a, b);
                        a = ans;
                }

                printf("%d\n", ans * n);
        }

        return 0;
}
