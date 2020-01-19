#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v[50][50];
    int i, j, odd = 1, even = 2, n;
    scanf("%d", &n);

    int m = n / 2, a = m - 1, b = m + 1;
    int flag = 0;
    memset(v, 0, sizeof(v));

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++)
            printf("%d ", v[i][j]);
        printf("\n");
    }

    return 0;
}
