#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

map < ll, ll > mp;
void setup() {
    for ( ll i = 2; i <= 1000005; i++ ) {
        for ( ll j = 2; j <= sqrt(1000005); j++ ) {
            if ( i % j == 0 ) {
                mp[i] = j;
                break;
            }
        }
        if ( mp[i] == 0 ) 
            mp[i] = i;
    }
}

void solve() {
    ll n, k;
    cin >> n >> k;

    cout << n + mp[n] + 2 * (k-1) << endl; 
}

int main() 
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    setup();

    int tc; 
    cin >> tc; 

    while ( tc-- ) 
        solve();

    return 0;
}
