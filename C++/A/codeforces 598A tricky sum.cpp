#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    long long sum;
    long long arr[105],n,i,j;

    cin >> n;
    for(i = 0; i < n; i++)
        cin >> arr[i];
    for(i = 0; i < n; i++){
        long long cnt = (arr[i]+1)*arr[i];
        cnt /= 2;
        sum = 0;
        for(j = 1; j <= arr[i]; j = j*2)
            sum += j;
        arr[i] = cnt - (2*sum);
    }
    for(i = 0; i < n; i++)
        cout << arr[i] << endl;

    return 0;
}
