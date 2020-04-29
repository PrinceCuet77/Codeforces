#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int a, b;
        while ( scanf("%d %d", &a, &b) == 2 ) {
                if ( a == 0 && b == 0 ) {
                        printf("NO\n");
                        continue;
                }

                if ( a+1 == b || b == a || b+1 == a )
                        printf("YES\n");
                else
                        printf("NO\n");
        }

        return 0;
}
