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

typedef long long ll; 

bool check(vector < ll >& v, ll mid, ll t) {
        for ( ll i = mid; i < v.size(); i++ ) 
                if ( v[i] - v[i-mid] <= t ) 
                        return true;

        return false;
}

void solve() {  
        ll n, t; 
        while ( cin >> n >> t ) {
                vector < ll > a(n), v(n+1);
                v[0] = 0; 
                for ( ll i = 1; i <= n; i++ ) {
                        ll x; 
                        cin >> x; 
                        v[i] = v[i-1] + x;
                }

                ll low = 1, high = n, ans = 0; 
                while ( low <= high ) {
                        ll mid = low + (high - low) / 2; 
                        if ( check(v, mid, t) ) { 
                                ans = mid;
                                low = mid + 1;
                        }
                        else high = mid - 1;
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
