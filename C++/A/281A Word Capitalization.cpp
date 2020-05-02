#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char ch[1005];

    scanf("%s", ch);
    if(ch[0] >=  'a' && ch[0] <= 'z')
        ch[0] = 65 + (ch[0] - 'a');

    cout << ch << endl;

    return 0;
}
