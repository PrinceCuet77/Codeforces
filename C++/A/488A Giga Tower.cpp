#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        long long n;
        while ( scanf("%lld", &n) == 1 ) {
                bool flag = false;
                long long ans = 0;

                for ( long long i = n+1; ; i++ ) {
                        long long t = i;
                        while ( t ) {
                                int tmp = t % 10;
                                tmp = tmp < 0 ? -tmp : tmp;
                                if ( tmp == 8 ) {
                                        flag = true;
                                        break;
                                }
                                t /= 10;
                        }

                        if ( flag ) {
                                ans = i-n;
                                break;
                        }
                }

                printf("%lld\n", ans);
        }

        return 0;
}
