#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    char ch[260];
    getchar();
    gets(ch);
    int flag = 0, count1 = 0, count2 = 0, count3 = 0, c = 0;
    for(int i = 0; i < n; i++){
        if(ch[i] ==  '('){
            flag = 1;
            if(count1 > count2)
                count2 = count1;
            count1 = 0;
            continue;
        }
        if(!flag){
            if((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
                count1++;
            else if(ch[i] == '_'){
                if(count1 > count2)
                    count2 = count1;
                count1 = 0;
            }
        }
        else{
            if((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
                count3 = 1;
            else if(ch[i] == '_'){
                c += count3;
                count3 = 0;
            }
            else if(ch[i] == ')'){
                flag = 0;
                c += count3;
                count3 = 0;
            }
        }
    }
    if(count1 > count2)
        count2 = count1;
    printf("%d %d\n", count2, c);

    return 0;
}

