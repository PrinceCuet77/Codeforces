#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, k;
        while ( scanf("%d %d", &n, &k) == 2 ) {
                for ( int i = 0; i < n; i++ ) {
                        for ( int j = 0; j < n; j++ ) {
                                if ( i == j )
                                        printf("%d ", k);
                                else
                                        printf("0 ");
                        }
                        printf("\n");
                }
        }

        return 0;
}
