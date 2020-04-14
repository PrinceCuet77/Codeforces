#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int t;
        scanf("%d", &t);
        while ( t-- ) {
                int n;
                scanf("%d", &n);

                int a[n], b[n];
                for ( int i = 0; i < n; i++ )
                        scanf("%d %d", &a[i], &b[i]);

                bool flag = false;
                if ( a[0] < b[0] )
                        flag = true;

                for ( int i = 1; i < n && flag == false; i++ ) {
                        if ( a[i] < a[i-1] || a[i] < b[i] || b[i] < b[i-1] || (a[i]-a[i-1]) < (b[i]-b[i-1]) ) {
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
