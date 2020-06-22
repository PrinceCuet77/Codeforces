#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        int noOfTrees; 
        while ( cin >> noOfTrees ) {
                vector < pair < int, int > > p, n;
                int cnt = 0; 
                for ( int i = 0; i < noOfTrees; i++ ) {
                        int x, a; 
                        cin >> x >> a; 
                        if ( x < 0 ) n.push_back({-x, a}); 
                        else if ( x > 0 ) p.push_back({x, a});
                        else cnt += a;
                }

                if ( n.size() == p.size() ) {
                        for ( auto x : n ) cnt += x.second;
                        for ( auto x : p ) cnt += x.second;

                        cout << cnt << endl; 
                        continue;
                }

                sort(p.begin(), p.end());
                sort(n.begin(), n.end()); 

                if ( n.size() < p.size() ) {
                        for ( auto x : n ) cnt += x.second; 
                        for ( int i = 0; i <= n.size(); i++ ) 
                                cnt += p[i].second;

                        cout << cnt << endl; 
                }
                else {
                        for ( auto x : p ) cnt += x.second; 
                        for ( int i = 0; i <= p.size(); i++ ) 
                                cnt += n[i].second;

                        cout << cnt << endl; 
                }
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
