#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> vectuh(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> vectuh[i];
        }
        std::vector<int> res;
        res.push_back(vectuh[0]);
        for (int i = 1; i < n; i++)
        {
            if (vectuh[i-1] > vectuh[i])
            {
                res.push_back(vectuh[i]);
                res.push_back(vectuh[i]);
            }
            else
            {

                res.push_back(vectuh[i]);
            }
        }
        std::cout << res.size() << "\n";
        for (int i = 0; i < res.size(); i++)
        {
            std::cout << res[i] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}