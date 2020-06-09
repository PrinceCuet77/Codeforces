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
        ll n; 
        while ( cin >> n ) {
                ll spend = 0;
                while ( n ) {
                        ll cashback = n / 10; 
                        ll remain = n % 10; 
                        n = cashback + remain; 
                        spend += cashback * 10;
                        if ( n < 10 ) { 
                                spend += n;
                                break;
                        }
                }

                cout << spend << "\n";
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
