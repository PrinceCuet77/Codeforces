#include <bits/stdc++.h>
using namespace std;

int giveSum(int n) {
        return (n * n + n) / 2;
}

int findingMinSum(int a[], int m, int n) {
        int total = 0, i = 0;
        while ( n-- ) {
                total += a[i];
                a[i]--;
                if ( a[i] == 0 )
                        i++;
        }

        return total;
}

int findingMaxSum(int a[], int m, int n) {
        int total = 0, i = 0;
        while ( n-- ) {
                total += a[i];
                a[i]--;
                sort(a, a+m, greater < int > ());
        }

        return total;
}

int main()
{
        //freopen("file.txt", "r", stdin);
        int n, m;
        while ( cin >> n >> m ) {
                int a[m], total = 0, b[m];
                for ( int i = 0; i < m; i++ ) {
                        cin >> a[i];
                        total += a[i];
                        b[i] = a[i];
                }

                sort(b, b+m);
                if ( total == n ) {
                        int t = findingMinSum(b, m, n);
                        cout << t << " " << t << endl;
                        continue;
                }

                sort(a, a+m, greater < int > ());
                int t1 = findingMaxSum(a, m, n), t2 = findingMinSum(b, m, n);
                cout << t1 << " " << t2 << endl;
        }

        return 0;
}
