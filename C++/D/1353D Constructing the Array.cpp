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

struct cmp {
        bool operator() ( const pair < int, int > &a, const pair < int, int > &b ) const {
                int lena = a.second - a.first + 1;
                int lenb = b.second - b.first + 1;
                if ( lena == lenb )
                        return a.first < b.first;
                return lena > lenb;
        }
};

void solve() {
        int n;
        cin >> n;

        vector < int > v(n);
        set < pair < int, int >, cmp > st;
        st.insert({0, n-1});

        int cnt = 1;
        while ( !st.empty() ) {
                pair < int, int > z = *st.begin();
                st.erase(*st.begin());

                int mid = (z.first + z.second) / 2;
                v[mid] = cnt++;

                if ( z.first < mid ) st.insert({z.first, mid-1});
                if ( mid < z.second ) st.insert({mid+1, z.second});
        }

        for ( auto x : v )
                cout << x << " ";
        cout << endl;
}

int main()
{
        ios_base :: sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        //freopen("input.txt", "r", stdin);

        int tc;
        cin >> tc;
        while ( tc-- )
                solve();

        return 0;
}
