#include <bits/stdc++.h>
using  namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        int n;
        while ( scanf("%d", &n) == 1 ) {
                vector < int > ne, p;
                int z = 0;

                for ( int i = 0; i < n; i++) {
                        int a;
                        scanf("%d", &a);

                        if ( a == 0 )
                                z++;
                        else if ( a > 0 )
                                p.push_back(a);
                        else if ( a < 0 )
                                ne.push_back(a);
                }

                if ( ne.size() >= 3 ) {
                        p.push_back(ne.back());
                        ne.pop_back();

                        p.push_back(ne.back());
                        ne.pop_back();
                }

                int t = 0;
                if ( (ne.size() & 1) == 0 ) {
                        t = ne.back();
                        ne.pop_back();
                }

                printf("%d ", ne.size());
                for ( int x : ne )
                        printf("%d ", x);
                printf("\n");

                printf("%d ", p.size());
                for ( int x : p )
                        printf("%d ", x);
                printf("\n");

                if ( !t )
                        printf("%d ", z);
                else
                        printf("%d ", z+1);
                for ( int i = 0; i < z; i++ )
                        printf("0 ");
                if ( !t )
                        printf("\n");
                else
                        printf("%d\n", t);
        }


        return 0;
}
