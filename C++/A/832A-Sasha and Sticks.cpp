#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll n, k;
        while ( cin >> n >> k ) {
                if ( (n/k) % 2 == 1 ) cout << "yes" << endl;
                else if ( (n/k) % 2 == 0 ) cout << "no" << endl;
        }

        return 0;
}

