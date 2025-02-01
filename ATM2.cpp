#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> vectuh(n);
        std::vector<int> vectuhUwU;

        for (int i = 0; i < n; i++)
        {
            std::cin >> vectuh[i];
        }
        for (int i = 0; i < vectuh.size(); i++)
        {
            if (vectuh[i] <= k)
            {
                vectuhUwU.push_back(1);
                n -= vectuh[i];
            }
            else
            {
                vectuhUwU.push_back(0);
            }
        }
        for (int i = 0; i < vectuhUwU.size(); i++)
        {
            std::cout << vectuhUwU[i] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
