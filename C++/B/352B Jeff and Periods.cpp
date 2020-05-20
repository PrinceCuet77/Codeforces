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
                vector < vector < int > > a(100005, vector < int > ());
                int mx = -1;
                for ( int i = 1; i <= n; i++ ) {
                        int tm; 
                        cin >> tm; 
                        a[tm].push_back(i);
                        mx = max(mx, tm); 
                }
        
                vector < pair < int, int > > v;
                for ( int i = 1; i <= mx; i++ ) {
                        if ( a[i].size() > 0 ) {
                                if ( a[i].size() == 1 ) v.push_back(make_pair(i, 0));
                                else if ( a[i].size() == 2 ) v.push_back(make_pair(i, a[i][1] - a[i][0]));
                                else {
                                        int diff = a[i][1] - a[i][0];
                                        bool flag = false;
                                        for ( int k = 2; k < a[i].size(); k++ ) {
                                                if ( diff != (a[i][k] - a[i][k-1]) ) {
                                                        flag = true; 
                                                        break;
                                                }
                                        }

                                        if ( flag == false ) v.push_back(make_pair(i, diff));
                                }
                        }
                }

                cout << v.size() << endl; 
                for ( auto x : v ) 
                        cout << x.first << " " << x.second << endl; 
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
                
        solve();

        return 0;
}
