#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
//storing frequencies of each multiple or each element that is <= n in a hash array
int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        int n;
        std::cin >> n;
        std::vector<int> vectuh(n);
        std::map<int, int> mpp;
        mpp.clear();
        for (auto &ae : vectuh){
            std::cin >> ae;
            mpp[ae]++;
        }
        int ans = 0;
        int total[200005] = {0};
        for (int i = 1; i <= n; i++)
        {
           int cm = i;
           while (cm <= n)
           {
            total[cm] += mpp[i];
            cm += i;
           }
           ans = std::max(ans, total[i]);
           
        }
        std::cout << ans << std::endl;
    }
    return 0;
}