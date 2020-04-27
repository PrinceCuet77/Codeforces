#include <bits/stdc++.h>
using  namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( scanf("%d", &n) == 1 ) {
                int sumA = 0, sumB = 0;
                bool flag = false;

                for ( int i = 0; i < n; i++ ) {
                        int a, b;
                        scanf("%d %d", &a, &b);

                        if ( (a & 1) == 0 && (b & 1) || (a & 1) && (b & 1) == 0 )
                                flag = true;

                        sumA += a;
                        sumB += b;
                }

                if ( (sumA & 1) == 0 && (sumB & 1) == 0 )
                        printf("0\n");
                else if ( (sumA & 1) && (sumB & 1) && flag )
                        printf("1\n");
                else
                        printf("-1\n");
        }


        return 0;
}
