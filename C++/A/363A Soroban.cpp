#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        long long n;
        while ( scanf("%lld", &n) == 1 ) {
                int t;
                if ( n == 0 )
                        t = 1;
                else
                        t = log10(n)+1;
                        
                for ( int i = 0; i < t; i++ ) {
                        int d = n % 10;
                        if ( d < 5 )
                                printf("O-|");
                        else {
                                printf("-O|");
                                d -= 5;
                        }

                        for ( int i = 0; i < d; i++ )
                                printf("O");
                        printf("-");
                        for ( int i = 0; i < 4-d; i++ )
                                printf("O");
                        printf("\n");
                        n /= 10;
                }
        }

        return 0;
}
