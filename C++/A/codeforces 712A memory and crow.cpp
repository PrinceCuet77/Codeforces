#include<stdio.h>
#include<iostream>
#define N 100005
using namespace std;

int main()
{
    long long n,arr[N],i,j;

    cin >> n;
    for(i = 0; i < n; i++)
        cin >> arr[i];
    long long sum = 0;
    for(i = 0; i < n; i++){
        if(i == n-1){
            arr[i] = arr[n-1];
            break;
        }
        sum = arr[i] + arr[i+1];
        arr[i] = sum;
    }
    for(i = 0; i < n; i++){
        if(i == n-1)
            cout << arr[i] << endl;
        else
            cout << arr[i] << " ";
    }

    return 0;
}
