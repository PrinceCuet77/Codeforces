/********************************************************************************
*                                                                               *
*        Author     : Rezoan Shakil Prince                                      *
*        Batch      : 14                                                        *
*        Email      : prince.cuet.77@gmail.com                                  *
*        University : Chittagong University of Engineering and Technology       *
*                                                                               *
********************************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {  
        int a, b; 
        while ( cin >> a >> b ) {
                int n; 
                cin >> n;
                double ans = 1e5;
                while ( n-- ) {
                        int u, v, w; 
                        cin >> u >> v >> w; 

                        double t = (a - u) * (a - u) + (b - v) * (b - v); 
                        t = sqrt(t);
                        t /= w;

                        ans = min(ans, t);
                }

                printf("%.20f\n", ans);
        }       
}

int main()
{
        IOS;

        // #ifndef prince77
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif

        solve();

        return 0;
}
