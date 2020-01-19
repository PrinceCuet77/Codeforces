#include<stdio.h>

int main()
{
    int arr[105],n,k,i,cnt=0;

    scanf("%d %d",&n,&k);
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    int t = arr[k-1];
    for(i = 0; i < n; i++){
        if(t <= arr[i] && arr[i] > 0)
            cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}
