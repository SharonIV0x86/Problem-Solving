#include <iostream>

#include <cmath>

#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum1 = 0;
        cin >> n;
        while (n != 0)
        {
            if (n % 10 == 4)
                sum1++;
            n = n / 10;
        }
        cout << sum1 << endl;

    }
    return 0;

}

