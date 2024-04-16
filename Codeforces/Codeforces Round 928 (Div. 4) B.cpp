 #include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <chrono>
#include <random>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>
#include <iomanip>
#include <bitset>
#include <cassert>
//https://codeforces.com/contest/1926/problem/B
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<string> g;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        g.push_back(s);
    }
    bool triangle = false;
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(g[i][j] == '1')
            {
                cnt++;
            }
        }
        if(cnt == 1)
        {
            triangle = true;
        }
        else if(cnt > 1)
        {
            break;
        }
    }
    reverse(g.begin(), g.end());
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 0; j < n; j++)
        {
            if(g[i][j] == '1')
            {
                cnt++;
            }
        }
        if(cnt == 1)
        {
            triangle = true;
        }
        else if(cnt > 1)
        {
            break;
        }
    }
    if(triangle)
    {
        cout << "TRIANGLE" << endl;
    }
    else
    {
        cout << "SQUARE" << endl;
    }
}
 
int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
 

//!!Failed Method
// #include <iostream>
// #include <vector>

// int main()
// {
//     int testCase;
//     std::cin >> testCase;
//     while (testCase--)
//     {
//         int n;
//         std::cin >> n;
//         std::vector<std::vector<int>> vectuh(n, std::vector<int>(n));

//         bool is1sIndexFound = false;
//         int ix;
//         int ij;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 std::cin >> vectuh[i][j];
//                 if (vectuh[i][j] == 1 && is1sIndexFound == false)
//                 {
//                     ix = i;
//                     ij = j;
//                     is1sIndexFound = true;
//                 }
//             }
//         }
//         std::cout << "Ix : " << ix << std::endl;
//         std::cout << "Ij : " << ij << std::endl;
//         if ((vectuh[ix + 1][ij] == 0 && vectuh[ix][ij + 1] == 1) ||
//             (vectuh[ix][ij - 1] == 0 && vectuh[ix][ij + 1] == 0) ||
//             (vectuh[ix + 1][ij] == 0 && vectuh[ix][ij + 1] == 1))
//         {
//             std::cout << "TRIANGLE\n";
//         }
//         else
//         {
//             std::cout << "SQUARE\n";
//         }
//     }
//     return 0;
// }