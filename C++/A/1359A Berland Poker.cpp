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

void solve() {
        int n, m, k; 
        while ( cin >> n >> m >> k ) {
                if ( n/k >= m ) 
                        cout << m << "\n";
                else {
                        int a = n/k; 
                        int rem = m - a; 
                        k--; 
                        int other =  rem / k; 

                        if ( rem % k != 0 ) other++;

                        cout << a - other << "\n";
                }
        }       
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        // #ifndef prince77
        //         freopen("input.txt", "r", stdin);
        //         freopen("output.txt", "w", stdout);
        // #endif

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
