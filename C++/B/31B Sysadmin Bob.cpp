#include <bits/stdc++.h>
using namespace std;

int main()
{
        //freopen("file.txt", "r", stdin);
        string ch;
        while ( cin >> ch ) {
                if ( ch.length() < 3 || ch[0] == '@' || ch[ch.length()-1] == '@' ) {
                        cout << "No solution" << endl;
                        continue;
                }

                vector < string > v;
                bool flag = false;
                string s = "";
                for ( int i = 0; i < ch.length(); i++ ) {
                        if ( ch[i] == '@' ) {
                                if ( i == 1 ) {
                                        v.push_back(s);
                                        s = "";
                                        continue;
                                }
                                else {
                                        if ( s.length() <= 1 ) {
                                                flag = true;
                                                break;
                                        }
                                        v.push_back(s);
                                        s = "";
                                }
                        }
                        else
                                s += ch[i];
                }

                if ( ch == s ) {
                        cout << "No solution" << endl;
                        continue;
                }

                v.push_back(s);

                if ( flag )
                        cout << "No solution" << endl;
                else {
                        for ( int i = 0; i < v.size(); i++ ) {
                                if ( i == 0 )
                                        cout << v[i];
                                else if ( i == v.size()-1 )
                                        cout << "@" << v[i] << endl;
                                else {
                                        string t = v[i];
                                        cout << "@";
                                        for ( int k = 0; k < t.length()-1; k++ )
                                                cout << t[k];
                                        cout << "," << t[t.length()-1];
                                }
                        }
                }
        }

        return 0;
}
