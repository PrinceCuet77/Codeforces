#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int a, b, c, d;
        while ( scanf("%d %d %d %d", &a, &b, &c, &d) == 4 ) {
                int first = (3 * a) / 10;
                int second = a - (a / 250) * c;
                int m = max(first, second);

                first = (3 * b) / 10;
                second = b - (b / 250) * d;
                int v = max(first, second);

                if ( m == v )
                        printf("Tie\n");
                else if ( m > v )
                        printf("Misha\n");
                else if ( m < v )
                        printf("Vasya\n");
        }

        return 0;
}
