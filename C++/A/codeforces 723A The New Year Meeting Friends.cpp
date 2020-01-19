#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int arr[3], n = 3;
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr+n);
    int t = arr[1] - arr[0];
    t += arr[2] - arr[1];
    printf("%d", t);

    return 0;
}
