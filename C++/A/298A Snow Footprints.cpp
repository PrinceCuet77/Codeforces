#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        string ch;
        int n;
        while ( scanf("%d", &n) == 1 ) {
                cin >> ch;

                int a, b;
                bool flag = false;
                for ( int i = 0; i < ch.length(); i++ ) {
                        if ( ch[i] == 'R' ) {
                                a = i+1;
                                flag = true;
                                break;
                        }
                }

                if ( flag == false ) {
                        for ( int i = 0; i < ch.length(); i++ ) {
                                if ( ch[i] == 'L' ) {
                                        a = i+1;
                                        break;
                                }
                        }

                        for ( int i = 0; i < ch.length(); i++ ) {
                                if ( ch[i] == 'L' && ch[i+1] == '.' ) {
                                        b = i+1;
                                        --a;
                                        swap(a, b);
                                        break;
                                }
                                else if ( ch[i] == 'L' && ch[i+1] == 'R' ) {
                                        b = i+1;
                                        break;
                                }
                        }

                        printf("%d %d\n", a, b);
                        continue;
                }

                for ( int i = 0; i < ch.length(); i++ ) {
                        if ( ch[i] == 'R' && ch[i+1] == '.' ) {
                                a = i+1;
                                b = a+1;
                                break;
                        }
                        else if ( ch[i] == 'R' && ch[i+1] == 'L' ) {
                                b = i+1;
                                break;
                        }
                }

                printf("%d %d\n", a, b);
        }

        return 0;
}
