#include <bits/stdc++.h>
//https://codeforces.com/contest/1926/problem/C
using namespace std;

const int MAX = 200'007;
const int MOD = 1'000'000'007;

int res[MAX];

int S(int x)
{
    int res = 0;
    while (x)
    {
        res += (x % 10);
        x /= 10;
    }
    return res;
}

void solve()
{
    int x;
    cin >> x;
    cout << res[x] << '\n';
}

int main()
{
    res[0] = 0;
    for (int i = 1; i < MAX; i++)
    {
        //doing precomputation before time count starts for inputting test cases.
        //basically we are computing the sum of digits of all the natural number upto n
        res[i] = res[i - 1] + S(i);
    }
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
    // solve();
}