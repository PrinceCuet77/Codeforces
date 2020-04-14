#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, x;
        while ( scanf("%d %d", &n, &x) == 2 ) {
                int prev = 0, watch = 0;
                for ( int i = 0; i < n; i++ ) {
                        int a, b;
                        scanf("%d %d", &a, &b);
                        int A = a - prev - 1;
                        if ( A >= x )
                                watch += (A%x);
                        else
                                watch += A;
                        watch += (b-a+1);
                        prev = b;
                }
                printf("%d\n", watch);
        }

        return 0;
}
