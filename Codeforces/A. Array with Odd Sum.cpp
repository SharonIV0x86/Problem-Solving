#include <iostream>
#include <algorithm>
#include <vector>
//https://codeforces.com/problemset/problem/1296/A
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> vectuh(n);
        int countOdds = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> vectuh[i];
            if(vectuh[i] % 2 != 0){
                countOdds++;
            }
        }
        if(countOdds == n && (n % 2 == 0)){
            std::cout << "NO\n";
        }else if(countOdds >= 1){
            std::cout << "YES\n";
        }else if(countOdds == 0){
            std::cout << "NO\n";
        }
    }
    return 0;
}