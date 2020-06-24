#include <bits/stdc++.h>
using namespace std;

#define Prince ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

typedef long long ll; 

void solve() {  
        ll n, k; 
        cin >> n >> k; 
        ll a[n], w[k];
        for ( ll i = 0; i < n; i++ ) 
                cin >> a[i];

        for ( ll i = 0; i < k; i++ ) 
                cin >> w[i]; 

        sort(a, a+n, greater < ll > ()); 
        sort(w, w+k);

        ll cnt = 0, ans = 0;
        for ( ll i = 0; i < k; i++ ) {
                ans += a[i];
                w[i]--;
                if ( w[i] == 0 ) cnt++;
        }

        for ( ll i = 0; i < cnt; i++ ) 
                ans += a[i];
        
        ll pos = k; 
        for ( ll i = 0; i < k; i++ ) {
                if ( w[i] == 0 ) continue;
                pos += w[i];
                ans += a[pos-1];
        }

        cout << ans << endl; 
}

int main()
{
        Prince;

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
