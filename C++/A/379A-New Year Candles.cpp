#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                int total = n, hand = 0;
                while ( n ) {
                        if ( n == 1 ) {
                                hand++;
                                break;
                        }
                        hand += (n%m);
                        n /= m;
                        total += n;
                }

                n = hand;
                hand = 0;
                while ( n ) {
                        if ( n == 1 ) {
                                hand++;
                                break;
                        }
                        hand += (n % m);
                        n /= m;
                        total += n;

                }
                total += hand / m;

                cout << total << endl;
        }

        return 0;
}

