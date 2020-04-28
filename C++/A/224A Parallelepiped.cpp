#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        long long ab, bc, ca;
        while ( scanf("%lld %lld %lld", &ab, &bc, &ca) == 3 ) {
                long long a = (long long)sqrt(ab * ca / bc);
                long long b = (long long)sqrt(ab * bc / ca);
                long long c = (long long)sqrt(bc * ca / ab);

                printf("%lld\n", 4*(a+b+c));
        }

        return 0;
}
