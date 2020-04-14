#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( scanf("%d", &n) == 1 ) {
                int a[n];
                for ( int i = 0; i < n; i++ )
                        scanf("%d", &a[i]);

                int ans = 1e7;
                for ( int i = 0; i < n; i++ ) {
                        int sum = 0;
                        for ( int j = 0; j < a[i]; j++ ) {
                                int temp;
                                scanf("%d", &temp);
                                sum += temp;
                        }
                        int cost = sum * 5 + a[i] * 15;
                        ans = min(ans, cost);
                }

                printf("%d\n", ans);
        }

        return 0;
}
