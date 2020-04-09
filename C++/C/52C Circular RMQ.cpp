#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mx 2000005
ll ar[mx], tree[4*mx], lazy[4*mx];

void build(ll node, ll b, ll e) {
        if ( b == e ) {
                tree[node] = ar[b];
                return;
        }
        ll mid = (b+e) >> 1;
        build(node << 1, b, mid);
        build(node << 1 | 1, mid+1, e);
        tree[node] = min(tree[node << 1], tree[node << 1 | 1]);
}

void update(ll node, ll b, ll e, ll i, ll j, ll newValue) {
        if ( b > e )
                return;

        // Make sure all propagation is done at node. If not update tree at node and mark its children for lazy propagation
        if ( lazy[node] != 0 ) {
                tree[node] += lazy[node];
                if ( b != e ) {
                        lazy[node << 1] += lazy[node];
                        lazy[node << 1 | 1] += lazy[node];
                }
                lazy[node] = 0;
        }

        // No overlap
        if ( i > e || j < b )
                return;

        // total overlap
        if ( i <= b && j >= e ) {
                tree[node] += newValue;
                if ( b != e ) {
                        lazy[node << 1] += newValue;
                        lazy[node << 1 | 1] += newValue;
                }
                return;
        }

        // Partial overlap
        ll mid = (b+e) >> 1;
        update(node << 1, b, mid, i, j, newValue);
        update(node << 1 | 1, mid+1, e, i, j, newValue);
        tree[node] = min(tree[node << 1], tree[node << 1 |1]);
}

ll query(ll node, ll b, ll e, ll i, ll j) {
        if ( b > e )
                return 1e9;

        // Make sure all propagation is done at node. If not update tree at node and mark its children for lazy propagation
        if ( lazy[node] != 0 ) {
                tree[node] += lazy[node];
                if ( b != e ) {
                        lazy[node << 1] += lazy[node];
                        lazy[node << 1 | 1] += lazy[node];
                }
                lazy[node] = 0;
        }

        // No overlap
        if ( i > e || j < b )
                return 1e9;

        // total overlap
        if ( i <= b && j >= e )
                return tree[node];

        // Partial overlap
        ll mid = (b+e) >> 1;
        ll p1 = query(node << 1, b, mid, i, j);
        ll p2 = query(node << 1 | 1, mid+1, e, i, j);
        return min(p1, p2);
}

int main()
{
        //freopen("file.txt", "r", stdin);
        ll n;
        scanf("%lld", &n);

        for ( ll i = 1; i <= n; i++ )
                scanf("%lld", &ar[i]);

        build(1, 1, n);

        ll m;
        scanf("%lld", &m);

        for ( ll i = 0; i <= m; i++ ) {
                string str;
                getline(cin, str);
                stringstream ss(str);

                vector < ll > v;
                ll value;
                while ( ss >> value )
                        v.push_back(value);

                if ( v.size() == 0 )
                        continue;

                ll l = v[0] + 1;
                ll r = v[1] + 1;

                if ( v.size() == 2 ) {
                        if ( l <= r )
                                printf("%lld\n", query(1, 1, n, l, r));
                        else
                                printf("%lld\n", min(query(1, 1, n, l, n), query(1, 1, n, 1, r)));
                } else if ( v.size() == 3 ) {
                        ll x = v[2];
                        if ( l <= r )
                                update(1, 1, n, l, r, x);
                        else {
                                update(1, 1, n, l, n, x);
                                update(1, 1, n, 1, r, x);
                        }
                }
        }

        return 0;
}
