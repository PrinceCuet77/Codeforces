#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        string ch, word = "aeiouyAEIOUY";
        while ( getline(cin, ch) ) {
                getchar();
                string st = "";
                for ( int i = 0; i < ch.length(); i++ ) {
                        if ( ch[i] == ' ' )
                                continue;
                        st += ch[i];
                }

                bool flag = false;
                for ( int i = 0; i < st.length()-1; i++ ) {
                        if ( st[i+1] == '?' ) {
                                for ( int j = 0; j < word.length(); j++ ) {
                                        if ( st[i] == word[j] ) {
                                                flag = true;
                                                break;
                                        }
                                }
                        }

                        if ( flag )
                                break;
                }

                if ( flag )
                        printf("YES\n");
                else
                        printf("NO\n");
        }

        return 0;
}
