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
        int n; 
        while ( cin >> n ) {
                vector < int > v(n);
                for ( int i = 0; i < n; i++ ) {
                        cin >> v[i];
                        v[i]--;
                }

                int p = 0;
                while ( p < n ) {
                        auto x = min_element(v.begin() + p, v.end()) - v.begin();
                        int ele = v[x];

                        v.erase(v.begin() + x);
                        v.insert(v.begin() + p, ele);

                        if ( x == p ) p = x + 1; 
                        else p = x;
                }

                for ( auto x : v ) 
                        cout << x + 1 << " ";
                cout << endl; 
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
