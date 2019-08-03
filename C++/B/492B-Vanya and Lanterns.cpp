#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        //freopen("file.text", "r", stdin);
        ll n, l;
        while ( cin >> n >> l ) {
                ll ar[n+5];
                for ( ll i = 0; i < n; i++ )
                        cin >> ar[i];

                sort(ar, ar+n);
                double maxi = -100.0;
                for ( ll i = 0; i < n-1; i++ )
                        if ( maxi < (ar[i+1] - ar[i]) )
                                maxi = ar[i+1] - ar[i];

                if ( ar[0] == 0 && ar[n-1] == l )
                        printf("%.10f\n", (double)(maxi/2));
                else if ( ar[0] == 0 && ar[n-1] != l )
                        printf("%.10f\n", (double)max(maxi/2, (double)l-ar[n-1]));
                else if ( ar[0] != 0 && ar[n-1] == l )
                        printf("%.10f\n", (double)max(maxi/2, (double)ar[0]));
                else
                        printf("%.10f\n", (double)max(maxi/2, (double)max(l-ar[n-1], ar[0])));
        }

        return 0;
}

