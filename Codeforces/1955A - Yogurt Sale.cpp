#include <iostream>
#include <algorithm>
#define ll long long int
#define endl "\n"
#define PI 3.1415926535897932384626433832795
using namespace std;
//https://codeforces.com/problemset/problem/1955/A
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if (2 * a <= b)
        {
            cout << n * a << endl;
        }
        else
        {
            cout << (n / 2) * b + (n % 2) * a << endl;
        }
    }
    return 0;
}
