#include <bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main()
{
    ll n; 
    while ( cin >> n ) {
        ll a[n]; 
        for ( int i = 0; i < n; i++ ) 
            cin >> a[i];

        if ( n < 4 ) {
            cout << "no" << endl; 
            continue; 
        } 

        bool flag = false; 
        for ( ll i = 0; i < n-1; i++ ) {
            for ( ll j = 0; j < n-1; j++ ) {
                ll x1 = a[i], x2 = a[i+1], x3 = a[j], x4 = a[j+1]; 
                if ( (min(x1, x2) < min(x3, x4) && min(x3, x4) < max(x1, x2) && max(x1, x2) < max(x3, x4)) || 
                        (min(x3, x4) < min(x1, x2) && min(x1, x2) < max(x3, x4) && max(x3, x4) < max(x1, x2)) ) {
                    flag = true; 
                    break;
                }
            }
            if ( flag )
                break; 
        }

        if ( !flag ) 
            cout << "no" << endl; 
        else
            cout << "yes" << endl; 
    }

    return 0;
}
