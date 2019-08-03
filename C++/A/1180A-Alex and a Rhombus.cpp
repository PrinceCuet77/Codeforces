#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll n;
        while ( cin >> n ) {
                if ( n == 1 ) {
                        cout << n << endl;
                } else {
                        ll total = 0;
                        while ( n ) {
                                if ( n == 1 ) {
                                        total++;
                                        break;
                                }
                                total += (n-1)*4;
                                n--;
                        }
                        cout << total << endl;
                }
        }

        return 0;
}

