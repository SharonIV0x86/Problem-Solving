#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        int n, x;
        cin >> n >> x;
        int tp = 2 * n;
        int nr = tp - x;
        int ans = x - nr;
        if (ans < 0)
            ans = 0;
            
        cout << ans << endl;
    }
    return 0;
}