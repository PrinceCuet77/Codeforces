#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

void solve() {
        ll a, b;
        cin >> a >> b;

        cout << (abs(a-b) + 9) / 10 << endl;
}

int main()
{
        IOS;

        // freopen("input.txt", "r", stdin);

        int testCase;
        cin >> testCase;

        while ( testCase-- )
                solve();

        return 0;
}
