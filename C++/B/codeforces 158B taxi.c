#include<stdio.h>

int arr[5];
int main()
{
    int n,i,t,taxi = 0;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&t);
        arr[t]++;
    }
    taxi += arr[4];
    taxi += arr[3];
    if(arr[1] > arr[3])
        arr[1] -= arr[3];
    else
        arr[1] = 0;
    if(arr[2] % 2 == 0){
        taxi += arr[2] / 2;
    if(arr[1] % 4 == 0)
        taxi += arr[1] / 4;
    else
        taxi += arr[1] / 4 + 1;
    }
    else{
        taxi += arr[2] / 2 + 1;
        if(arr[1] >= 2)
            arr[1] -= 2;
        else{
            arr[1] = 0;
        }
        if(arr[1] != 0 && arr[1] % 4 == 0){
            taxi += arr[1] / 4;
        }
        else if(arr[1] != 0){
            taxi += arr[1] / 4 + 1;
        }
    }

    printf("%d\n",taxi);

    return 0;
}
