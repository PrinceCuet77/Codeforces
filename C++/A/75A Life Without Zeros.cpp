#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll sum(vector < ll > v) {
        ll total = 0;
        for ( ll i = v.size()-1, t = 1; i >= 0; i-- ) {
                total += v[i] * t;
                t *= 10;
        }

        return total;
}

int main()
{
        //freopen("file.txt", "r", stdin);
        string ch1, ch2;
        while ( cin >> ch1 ) {
                int t1, t2;
                vector < ll > v1, v2;

                for ( ll i = 0; i < ch1.length(); i++ )
                        v1.push_back(ch1[i]-'0');
                t1 = sum(v1);

                cin >> ch2;
                for ( ll i = 0; i < ch2.length(); i++ )
                        v2.push_back(ch2[i]-'0');
                t2 = sum(v2);
                ll sum1 = t1 + t2;

                v1.clear();
                v2.clear();
                for ( ll i = 0; i < ch1.length(); i++ ) {
                        if ( ch1[i] != '0' )
                                v1.push_back(ch1[i]-'0');
                }
                t1 = sum(v1);

                for ( ll i = 0; i < ch2.length(); i++ ) {
                        if ( ch2[i] != '0' )
                                v2.push_back(ch2[i]-'0');
                }
                t2 = sum(v2);
                ll sum2 = t1 + t2;

                vector < ll > c;
                while ( sum1 ) {
                        ll tmp = sum1 % 10;
                        if ( tmp != 0 )
                                c.push_back(tmp);
                        sum1 /= 10;
                }

                reverse(c.begin(), c.end());
                sum1 = sum(c);

                if ( sum1 == sum2 )
                        printf("YES\n");
                else
                        printf("NO\n");
        }

        return 0;
}
