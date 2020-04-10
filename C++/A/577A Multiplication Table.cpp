#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector < long long > v;
void printDivisors(ll n) {
        for (ll i=1; i<=sqrt(n); i++) {
                if (n%i == 0) {
                        if (n/i == i)
                                v.push_back(i);
                        else {
                                v.push_back(i);
                                v.push_back(n/i);
                        }
                }
        }
}

int main()
{
        ll n, x;
        while ( cin >> n >> x ) {
                ll cnt = 0;
                printDivisors(x);
                for ( ll val : v ) {
                        if ( val * n >= x && val <= n )
                                cnt++;
                }
                cout << cnt << endl;
                v.clear();
        }

        return 0;
}
