#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n, k, cnt1 = 0, cnt2 = 0;
    char ch[101][101], str[101];
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++)
        scanf("%s", ch[i]);
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < n; i++){
        int l = strlen(ch[i]);
        if(l < len)
            cnt1++;
        if(l <= len)
            cnt2++;
    }
    int f = (cnt1 / k) * 5;
    f = cnt1 + f + 1;
    int s = (cnt2 - 1) / k;
    s *= 5;
    s += cnt2;
    printf("%d %d\n", f, s);

    return 0;
}
