#include<stdio.h>
#include<iostream>
using namespace std;

int arr[1000005];
int main()
{
    long n,b,d,i;

    scanf("%ld %ld %ld",&n, &b, &d);
    for(i = 0; i < n; i++)
        scanf("%ld",&arr[i]);

    long total = 0;
    long res = 0;
    for(i = 0; i < n; i++){
        if(arr[i] <= b){
            total += arr[i];
            if(total > d){
                total = 0;
                res++;
            }
        }
    }
    printf("%ld\n",res);

    return 0;
}
