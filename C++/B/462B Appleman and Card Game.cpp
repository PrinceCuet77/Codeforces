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

void solve() { 
        ll n, k; 
        while ( cin >> n >> k ) {
                string ch; 
                cin >> ch; 

                map < char, ll > mp; 
                for ( ll i = 0; i < ch.length(); i++ ) 
                        mp[ch[i]]++;
                
                vector < ll > v; 
                for ( auto x : mp ) 
                        v.push_back(x.second); 

                sort(v.begin(), v.end(), greater < ll > ()); 

                ll ans = 0;
                for ( ll i = 0; i < v.size(); i++ ) {
                        if ( v[i] <= k ) {
                                ans += (v[i] * v[i]); 
                                k -= v[i];
                        }
                        else {
                                ans += (k * k);
                                break;
                        }
                } 

                cout << ans << "\n";
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
