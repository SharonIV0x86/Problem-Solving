#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
//https://codeforces.com/group/fkQQ5I8JeS/contest/538618/my
int main()
{
    int n;
    std::cin >> n;
    std::vector<std::string> vectuh(n);
    std::unordered_map<std::string, int> mpp;
    for (int i = 0; i < n; i++)
        std::cin >> vectuh[i];

    for (int i = 0; i < n; i++)
    {
        mpp[vectuh[i]]++;
    }
    int threshold = n / 2;
    bool found = false;
    std::string color = "";
    for (const auto &[first, second] : mpp)
    {
        if (second > threshold)
        {
            found = true;
            color = first;
            break;
        }
    }
    if (found)
    {
        std::cout << color << "\n";
    }
    else
    {
        std::cout << "uh-oh\n";
    }
    return 0;
}