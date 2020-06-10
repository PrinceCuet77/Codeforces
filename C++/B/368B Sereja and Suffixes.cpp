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
        int n, m; 
        while ( cin >> n >> m ) {
                int a[n]; 
                for ( int i = 0; i < n; i++ ) 
                        cin >> a[i];

                set < int > st;
                int b[n];
                for ( int i = n-1; i >= 0; i-- ) {
                        st.insert(a[i]); 
                        b[i] = st.size();
                }

                for ( int i = 0; i < m; i++ ) {
                        int val; 
                        cin >> val; 
                        cout << b[val-1] << "\n"; 
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

        solve();

        return 0;
}
