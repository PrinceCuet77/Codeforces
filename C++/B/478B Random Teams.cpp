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

typedef long long ll; 

ll sum(ll n) {
        return ((n-1) * n) / 2;
}

void solve() { 
        ll n, m; 
        while ( cin >> n >> m ) {
                ll mx = n - (m-1);
                mx = sum(mx);

                ll a = n / m, b = n % m; 
                ll mn = sum(a) * (m - b) + sum(a + 1) * b;
                
                cout << mn << " " << mx << endl; 
        }
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        solve();

        return 0;
}
