#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        string ch;
        while ( cin >> n ) {
                cin >> ch;
                map < char, int > mp;
                for ( int i = 0; i < ch.length(); i++ )
                        mp[ch[i]]++;

                vector < int > vec;
                int noOfZero = mp['z'];
                int noOfOne = mp['n'];

                for (int i = 0; i < noOfOne; i++ )
                        vec.push_back(1);

                for ( int i = 0; i < noOfZero; i++ )
                        vec.push_back(0);

                for ( int x : vec )
                        cout << x << " ";
                cout << "\n";
        }

        return 0;
}

