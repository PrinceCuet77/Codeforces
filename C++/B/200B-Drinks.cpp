#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.text", "r", stdin);
        int n;
        while ( cin >> n ) {
                double a[n+5], sum = 0.0;
                for ( int i = 0; i < n; i++ ) {
                        cin >> a[i];
                        sum += a[i];
                }

                printf("%.12f\n", (double)(sum/n));
        }

        return 0;
}

