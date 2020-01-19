#include <bits/stdc++.h>
using namespace std;

int main()
{
        int testCase;
        cin >> testCase;
        while ( testCase-- ) {
                int bun, beef, chicken, humCost, chickenCost;
                cin >> bun >> beef >> chicken;
                cin >> humCost >> chickenCost;

                bun /= 2;
                int total = 0;

                if ( humCost < chickenCost ) {
                        swap(humCost, chickenCost);
                        swap(beef, chicken);
                }

                int taken = min(bun, beef);
                total += (taken * humCost);
                bun -= taken;
                beef -= taken;

                taken = min(bun, chicken);
                total += (taken * chickenCost);
                bun -= taken;
                chicken -= taken;

                cout << total << endl;
        }

        return 0;
}

