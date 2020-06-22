#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

bool cmp(pair < int, int > a, pair < int, int > b) {
        if ( a.first > b.first ) return true;
        else if ( a.first == b.first ) {
                if ( a.second < b.second ) return true;
                else return false;
        }
        else return false;
}

void solve() {
        int n, k; 
        while ( cin >> n >> k ) {
                vector < pair < int, int > > v; 
                map < pair < int, int >, int > mp; 
                for ( int i = 0; i < n; i++ ) {
                        int p, t; 
                        cin >> p >> t; 
                        v.push_back({p, t});
                        mp[{p, t}]++;
                }

                sort(v.begin(), v.end(), cmp); 

                int ans = 0;
                for ( auto x : mp ) {
                        if ( x.first.first == v[k-1].first && x.first.second == v[k-1].second ) {
                                ans = x.second;
                                break;
                        }
                }

                cout << ans << endl; 
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
